/** 
 * @file  CANCommunication.cpp
 * @brief Implementación de la clase "CANCommunication"
 * @author Sergio Doctor López
 * @date 2013, 2014
 */

#include "../include/Modulo_Conduccion/CANCommunication.hpp"
#include <libpcan.h>


/**
 * Constructor de la clase
 * @param bDevNodeGiven Nodo donde se encuentra definido el puerto en el sistema
 * @param bTypeGiven Valor del tipo de nodo
 * @param nType  Tipo de dispositivo del CAN
 * @param dwPort Puerto en el cual se realiza la conexión CAN
 * @param wIrq Configuración Irq del dispositivo CAN
 * @param bitrate Velocidad de envío de tramas del CAN
 * @param frame_extended Modo de la trama: extendida o standart
 * @param id Etiqueta de conexión 
 */

CANCommunication::CANCommunication(bool bDevNodeGiven, bool bTypeGiven, int nType,
                                   __u32 dwPort, __u16 wIrq, uint32_t bitrate,
                                   bool frame_extended, string id) {

    connected = false;
    flagActive = true;

    this->bDevNodeGiven = bDevNodeGiven;
    this->bTypeGiven = bTypeGiven;
    this->nType = nType;
    this->dwPort = dwPort;
    this->wIrq = wIrq;
    this->bitrate = bitrate;
    this->frame_extended = frame_extended;
    this->id = id;
    contWrite = 0;
    contRead = 0;
    errorWrite = false;
    errorRead = false;
    
}


/**
 * Destructor de la clase
 */

CANCommunication::~CANCommunication() {
    CloseCommunication(h);
}

/**
 * Método que establece la comunicación CAN
 * @return Devuelve si la conexión se ha establecido correctamente
 */

bool CANCommunication::EstablishCommunication() {

    bool res = false;
    if ((bDevNodeGiven) || (!bDevNodeGiven && !bTypeGiven)) 
    {
       
      h = LINUX_CAN_Open(DEFAULT_NODE, O_RDWR);   

      if (!h)
      {	
         
        cout << "Error can't open " << DEFAULT_NODE << " \n";          
      }
      else {
        cout << "LINUX Can Open() returned OK !\n";
        res = true;
        connected = true;
      }
    }
    else 
    {     
      // please use what is appropriate: HW_DONGLE_SJA, HW_DONGLE_SJA_EPP, 
      //                                 HW_ISA_SJA, HW_PCI y HW_USB
      
        h = CAN_Open(nType, dwPort, wIrq);

      if (!h)
      {
        
	cout << "Error can't open %s device \n";
      }
      else {
        cout << "Can Open() returned OK !\n";
        res = true;
        connected = true;
      }
    }
    
    return res;
    
}
    

/**
 * Método que configura la conexión CAN
 * @return Devuleve si la configuración se ha realizado correctamente
 */

bool CANCommunication::ConfigureCommunication() {

    bool res = false;
    int type;
    
    if (frame_extended)
        type = CAN_INIT_TYPE_EX;
    else
        type = CAN_INIT_TYPE_ST;

    errno_can = CAN_Init(h, bitrate, type);
    if (errno_can == CAN_ERR_OK) // errno_configure = 0;
      {
        cout << "Configuration returned OK !\n";
        res = true;        
      }
    
    else{  //errno_configure = -1
        //Error que impide abrir una comunicación CAN necesaria
        
	cout << "CAN_Init() failed with error: The bitrate " << bitrate << " is not the correct! \n";
	CAN_Close(h); 
    }

    return res;


}

/**
 * Método que configura la conexión CAN
 * @return Devuleve si la configuración se ha realizado correctamente
 */

bool CANCommunication::CloseCommunication(HANDLE h) {
    
    bool res = false;

    errno_can = CAN_Close(h);

    if (errno_can != CAN_ERR_OK){ // CAN_ERR_OK = 0
        cout << "canClose() failed with error !\n";
        
    }
    else{ 
        cout << "Can Close() returned OK !\n";
        res = true;
    }

    return res;
}

/**
 * Método que envía un mensaje CAN
 * @param msgTx Estructura que contiene el mensaje de envío CAN
 * @return Devuelve si el mensaje se ha enviado correctamente
 */
bool CANCommunication::SendMessage(TPCANMsg* msgTx) {

    bool res = false;
    
    //errno_can = CAN_Write (h, msgTx);
    errno_can = LINUX_CAN_Write_Timeout(h, msgTx, 2000000);
    
    if (errno_can != CAN_ERR_OK){
        cout << "canWrite() failed() with error " << errno_can << "!\n";
        if (inicio_read_write_CAN_frame) {
                checkErrorWrite (contWrite);
                contWrite++;  // Contador de tramas fail. 
        }
    }        
    else {
        //cout << "function canWrite() returned OK !\n";
        res = true;
        contWrite = 0;  // Se resetea el contador de tramas.
        errorWrite = false;
    }

    return res;
}

/**
 * Método que recive un mensaje CAN
 * @param msgTx Estructura que contiene el mensaje de recepción CAN
 * @return Devuelve si el mensaje se ha enviado correctamente
 */

int32_t CANCommunication::ReceiveMessage(TPCANRdMsg* msgRx) {

    //errno_can = LINUX_CAN_Read(h, msgRx);
    errno_can = LINUX_CAN_Read_Timeout(h, msgRx, 2000000);
    
    if (errno_can != CAN_ERR_OK) {
         cout << "canRead() failed with error " << errno_can << "!\n";
         if (inicio_read_write_CAN_frame) {
                 checkErrorRead (contRead);
                 contRead++;  // Contador de tramas fail.      
         }
    } else {
        //cout << "function canRead() returned OK !\n";
        contRead = 0;  // Se resetea el contador de tramas.
        errorRead = false;
    }
    
    return errno_can;

}

/**
 * Método que chequea si el numero de tramas de escrituras erróneas llegan a un máximo
 * @param contWrite Número de tramas de escrituras erróneas
 */ 

void CANCommunication::checkErrorWrite (int contWrite) {
    if (contWrite == ERROR_WRITE_FRAME)
        errorWrite = true;       
    
}

/**
 * Método que chequea si el numero de tramas de recepción erróneas llegan a un máximo
 * @param contWrite Número de tramas de recepción erróneas
 */ 

 
void CANCommunication::checkErrorRead (int contRead) {
    if (contRead == ERROR_READ_FRAME)
        errorRead = true;
    
}

/**
 * Hilo principal de la clase CANCommunication que lo que hace es leer mensajes del puerto CAN
*/ 
void CANCommunication::DoWork() {

    this->CommunicationTimer.Reset();
          
    while (flagActive) {
        
      
           i = ReceiveMessage(&msgRx);

                      
        if (i==0) {   
            
            if (this->id == "Conduccion"){
                
             //   printf("receivetest: 0x%08x   ", msgRx.Msg.ID); 
             //   for (i = 0; i < msgRx.Msg.LEN; i++)
             //           printf("%02x ", msgRx.Msg.DATA[i]);
                
                if (!(msgRx.Msg.MSGTYPE & MSGTYPE_RTR)) {
                      //printf("receivetest: 0x%08x   ", msgRx.Msg.ID); 
                      //for (i = 0; i < msgRx.Msg.LEN; i++)
                      //  printf("%02x ", msgRx.Msg.DATA[i]);
                      // printf("\n");
                     switch (msgRx.Msg.ID) {
                        case 0x005:
                        case 0x00E:
                        case 0x080:
                        case 0x71F:
                                //cout << "Cancomunitacion ID = " << hex << msgRx.Msg.ID << "\n";
                                //pthread_mutex_lock (&ConduccionQueue_mutex);                  
                                ConduccionQueue.push (msgRx);
                                //pthread_mutex_unlock (&ConduccionQueue_mutex);
                                this->CommunicationTimer.Reset(); // Se resetea cada vez que se reciba 1 mensaje   
                
                    //for (int v = 0; v < msgRx.Msg.LEN; v++)
                      //          printf("%02x ", msgRx.Msg.DATA[v]);
                    //printf("\n");
                                break;
                                                       
                        default:
                            cout << "\n CAN COMUNICATION - Error en lectura en el CAN de Ática\n";
                     }
                }
            }
            else 
                cout << "\n Error en lectura en hilo de conducción\n";
        }
        
        
    }
}


