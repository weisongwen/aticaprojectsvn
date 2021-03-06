
/** 
 * @file  DrivingConnectionManager.cpp
 * @brief Implementacion de la clase "DrivingConnectionManager"
 * @author Carlos Amores
 * @date 2013, 2014
 */

#include "../include/Modulo_Conduccion_Bobcat/DrivingConnectionManager.h"
#include "../include/Modulo_Conduccion_Bobcat/Timer.hpp"
#include <termios.h>

/** 
 * Constructor de la clase
 */
DrivingConnectionManager::DrivingConnectionManager() {
  socketDescriptor = -1;
  countMsg = 1;
  vehicleInfo.lights = false;
  vehicleInfo.blinkerLeft = false;
  vehicleInfo.blinkerRight = false;
  vehicleInfo.dipsp = false;
  vehicleInfo.dipsr = false;
  vehicleInfo.dipss = false;
  vehicleInfo.klaxon = false;
  vehicleInfo.brake = 0;
  vehicleInfo.thottle = 0;
  vehicleInfo.steering = 0;
  vehicleInfo.parkingBrake = false;
  vehicleInfo.gear = 0;
  vehicleInfo.speed = 0;
  vehicleInfo.motorTemperature = 0;
  vehicleInfo.motorRPM = 0;
  vehicleInfo.alarms = 0;
  vehicleInfo.rengine = false;
  
  lastCommandsSent.lights = false;
  lastCommandsSent.blinkerLeft = false;
  lastCommandsSent.blinkerRight = false;
  lastCommandsSent.dipsp = false;
  lastCommandsSent.dipsr = false;
  lastCommandsSent.dipss = false;
  lastCommandsSent.klaxon = false;
  lastCommandsSent.brake = 0;
  lastCommandsSent.thottle = 0;
  lastCommandsSent.steering = 0;
  lastCommandsSent.parkingBrake = false;
  lastCommandsSent.gear = 0;
  lastCommandsSent.speed = 0;
  lastCommandsSent.motorTemperature = 0;
  lastCommandsSent.motorRPM = 0;
  lastCommandsSent.alarms = 0;
  
  alarms.flag = false;
  alarms.driveAlarms = 0x0000;
  alarms.steeringAlarms = 0x0000;
  swPosition.flag = false;
  swPosition.position = -1;
  updateRegs.throttle.flag = false;
  updateRegs.throttle.value = 0;
  updateRegs.brake.flag = false;
  updateRegs.brake.value = 0;
  updateRegs.handBrake.flag = false;
  updateRegs.handBrake.value = 0;
  updateRegs.speed.flag = false;
  updateRegs.speed.value = 0;
  updateRegs.gear.flag = false;
  updateRegs.gear.value = 0;
  updateRegs.steering.flag = false;
  updateRegs.steering.value = 0;
  messagesTimeout = new Timer();
  byteCount = 0;
  
}

/**
 * Destructor de la clase
 */
DrivingConnectionManager::~DrivingConnectionManager() {
  shutdown(socketDescriptor,SHUT_WR);
  close(socketDescriptor);
  delete(messagesTimeout);
}

/**
 * Método público que envía la información de una trama al vehículo haciendo uso 
 * del socket de comunicación
 * @param[in] frame Trama a enviar via socket al vehículo 
 */
void DrivingConnectionManager::sendToVehicle(FrameDriving frame) {
  char bufAux[2];
  char bufAux2[4];
  
  /*short aux = frame.instruction;
  memcpy(&bufAux[0], &aux, sizeof (aux));*/
  bufAux2[0]=frame.instruction;
  
  /*aux = frame.id_instruccion;
  memcpy(&bufAux[0], &aux, sizeof (aux));*/
  bufAux2[1]=frame.id_instruccion;
  
  /*aux = frame.element;
  memcpy(&bufAux[0], &aux, sizeof (aux));*/
  bufAux2[2]=frame.element;
  
  /*aux = frame.value;
  memcpy(&bufAux[0], &aux, sizeof (aux));*/
  bufAux2[3]=frame.value;
  //printf("\n");
  send(socketDescriptor, bufAux2, sizeof (bufAux2), 0);
  
  if (frame.instruction == A_SET) 
    printf("--> SND: (%d) %d :: %d = %d\n", frame.id_instruccion, frame.instruction, frame.element, frame.value);
  //int aux = frame.instruction;
  /*int aux = 0;
  //memcpy(&bufAux[0], &aux, sizeof (aux));
  send(socketDescriptor, &aux, sizeof (aux), 0);
  usleep(1000);
  
  //aux = frame.id_instruccion;
  aux = 0;
  memcpy(&bufAux[0], &aux, sizeof (aux));
  //send(socketDescriptor, bufAux, sizeof (bufAux), 0);
  send(socketDescriptor, &aux, sizeof (aux), 0);
  usleep(1000);
  
  //aux = frame.element;
  aux = 1;
  memcpy(&bufAux[0], &aux, sizeof (aux));
  //send(socketDescriptor, bufAux, sizeof (bufAux), 0);
  send(socketDescriptor, &aux, sizeof (aux), 0);
  usleep(1000);
  
  //aux = frame.value;
  aux = 1;
  memcpy(&bufAux[0], &aux, sizeof (aux));
  //send(socketDescriptor, bufAux, sizeof (bufAux), 0);
  send(socketDescriptor, &aux, sizeof (aux), 0);
  usleep(1000);
  
  printf("--> SND: (%d) %d :: %d = %d\n", frame.id_instruccion, frame.instruction, frame.element, frame.value);
  
   */
  /*
  char bufData[8];
  memcpy(&bufData[0], &frame.instruction, sizeof (frame.instruction));
  memcpy(&bufData[2], &frame.id_instruccion, sizeof (frame.id_instruccion));
  memcpy(&bufData[4], &frame.element, sizeof (frame.element));
  memcpy(&bufData[6], &frame.value, sizeof (frame.value));
  if(!frame.instruction == GET){
        printf("--> SND: (%d) %d :: %d = %d\n", frame.id_instruccion, frame.instruction, frame.element, frame.value);
  }
  send(socketDescriptor, bufData, sizeof (bufData), 0);
  usleep(1000);*/
  fillLastCommand(frame.element,frame.value);
}

/**
 * Método público que envía una serie de tramas de tipo GET solicitando la 
 * información del vehículo
 * @param[in] full Indica si la solicitud a realizar es completa (true - 
 * actuadores y señalización) o parcial (false - actuadores únicamente)
 */
void DrivingConnectionManager::reqVehicleInfo() {
  FrameDriving frame;
  frame.instruction = GET;
  frame.id_instruccion = 0;
  frame.value = 0;
  frame.element = THROTTLE;
  sendToVehicle(frame);
  frame.element = ABRAKE;
  sendToVehicle(frame);
  frame.element = HANDBRAKE;
  sendToVehicle(frame);
  frame.element = STEERING;
  sendToVehicle(frame);
  frame.element = GEAR;
  sendToVehicle(frame);
  /*frame.element = CRUISING_SPEED;
  sendToVehicle(frame);
  frame.element = MOTOR_TEMPERATURE;
  sendToVehicle(frame);
  frame.element = DIPSP;
  sendToVehicle(frame);*/
  frame.element = DIPSS;
  sendToVehicle(frame);
  /*frame.element = DIPSR;
  sendToVehicle(frame);
  frame.element = BLINKER_RIGHT;
  sendToVehicle(frame);
  frame.element = BLINKER_LEFT;
  sendToVehicle(frame);
  frame.element = KLAXON;
  sendToVehicle(frame);
  frame.element = NIVELCOMBUSTIBLE;
  sendToVehicle(frame);*/
  frame.element = ARRANQUE;
  sendToVehicle(frame);
  frame.element = MANUALAUTOMATICO;
  sendToVehicle(frame);
  frame.element = ESTADO_MOTOR;
  sendToVehicle(frame);
  
}

/**
 * Método público que realiza una lectura por el socket de comunicación con el 
 * vehículo y obtiene una trama en caso de que el propio vehículo la haya 
 * enviado. La clasifica según el elemento al que hace referencia y procede a su 
 * tratamiento
 * @return Booleano que indica si se ha llevado a cabo una lectura via socket
 */
bool DrivingConnectionManager::checkForVehicleMessages() {
  char bufData;
  if (recv(socketDescriptor, &bufData, sizeof (bufData), 0) > 0) {
    switch(byteCount){
      case 0:
        frameRcv.instruction = static_cast<CommandID>(bufData);
        break;
      case 1:
        frameRcv.id_instruccion = bufData;
        break;
      case 2:
        frameRcv.element = static_cast<DeviceID>(bufData);
        break;
      case 3:
        frameRcv.value = bufData;
        break;
      default:
        break;
    };
    if(++byteCount == 4) {
      byteCount = 0;
      //printf("  <-- RCV: (%d) %d :: %d = %d\n",frameRcv.id_instruccion,frameRcv.instruction,frameRcv.element,frameRcv.value);
      if (frameRcv.instruction == ACK) {
        if (isCriticalInstruction(frameRcv.element)){
            manageACK(frameRcv.element,frameRcv.id_instruccion);
        }
      } else if (frameRcv.instruction == NACK) {
        manageNACK(frameRcv.id_instruccion);
      } else if (frameRcv.instruction == A_INFO) {
        if (frameRcv.element == STEERING_ALARMS || frameRcv.element == DRIVE_ALARMS) {
          setAlarmsInfo(frameRcv.element, frameRcv.value);
        }else if(frameRcv.element == MANUALAUTOMATICO){
            if(frameRcv.value!=swPosition.position){
		swPosition.flag = true;
            swPosition.position = frameRcv.value;
		}
        }else { // INFO corriente
          setVehicleInfo(frameRcv.element, frameRcv.value);	
        }
      }else{
          //printf("  <-- FAIL!!!! RCV: (%d) %d :: %d = %d\n",frameRcv.id_instruccion,frameRcv.instruction,frameRcv.element,frameRcv.value);
      }
    }
    return true;
  } else {
    return false;
  }
}

/**
 * Método publico consultor del atributo "socketDescriptor" de la clase 
 * @return Atributo "socketDescriptor" de la clase
 */
int DrivingConnectionManager::getSocketDescriptor() {
  return socketDescriptor;
}

/**
 * Método público consultor del atributo "vehicleInfo" de la clase
 * @param[in] full Indica si se devuelve el atributo completo (señales de actuadores
 * y señalización) o parcial (actuadores únicamente)
 * @return Atributo "vehicleInfo" de la clase
 */
DrivingInfo DrivingConnectionManager::getVehicleInfo(bool full) {
  DrivingInfo ret = vehicleInfo;
  if (full)
    ret.lights = true;
  else
    ret.lights = false;
  return ret;
}

/**
 * Método publico modificador del atributo "vehicleInfo" de la clase con la 
 * información de un dispositivo (actuador o señalización) concreto
 * @param[in] id_device Identificador del dispositivo a modificar
 * @param[in] value Valor de lectura del dispositivo a modificar
 */
void DrivingConnectionManager::setVehicleInfo(DeviceID id_device, short value) {
  switch (id_device) {
    case THROTTLE:
      vehicleInfo.thottle = value;
      break;
    case ABRAKE:
      vehicleInfo.brake = value;
      break;
    case HANDBRAKE:
      vehicleInfo.parkingBrake = (bool) value;
      break;
    case STEERING:
      vehicleInfo.steering = value;
      break;
    case GEAR:
      vehicleInfo.gear = value;
      break;
    case MOTOR_RPM:
      vehicleInfo.motorRPM = value;
      break;
    case CRUISING_SPEED:
      vehicleInfo.speed = value;
      break;
    case MOTOR_TEMPERATURE:
      vehicleInfo.motorTemperature = value;
      break;
    case BLINKER_LEFT:
      vehicleInfo.blinkerLeft = (bool) value;
      break;
    case BLINKER_RIGHT:
      vehicleInfo.blinkerRight = (bool) value;
      break;
    case BLINKER_EMERGENCY:
      vehicleInfo.blinkerRight = (bool) value;
      vehicleInfo.blinkerLeft = (bool) value;
      break;
    case KLAXON:
      vehicleInfo.klaxon = (bool) value;
      break;
    case DIPSP:
      vehicleInfo.dipsp = (bool) value;
      break;
    case DIPSS:
      vehicleInfo.dipss = (bool) value;
      break;
    case DIPSR:
      vehicleInfo.dipsr = (bool) value;
      break;
    case DRIVE_ALARMS:
      vehicleInfo.alarms = value;
      break;
    case ESTADO_MOTOR:
      vehicleInfo.rengine = (bool) value;
      
      //cout << value << endl;
      
      break;
    default:
      break;
  }
}

/**
 * Método público modificador del atributo "countMsg" de la clase utilizado para
 * llevar el conteo del los mensajes críticos (mecanismo de integridad). 
 * Contempla que se lleve a cabo según un contador incremental con intervalo 
 * 1..1024
 * @param[in] cont Nuevo valor para el atributo "countMsg"
 */
void DrivingConnectionManager::setCountCriticalMessages(short cont) {
  countMsg = cont;
  if (countMsg == 128)
    countMsg = 1;
}

/**
 * Método privado modificador de los atributos "driveAlarms" y "steeringAlarms" 
 * de la clase
 * @param[in] element Indica si las alarmas leidas corresponden a las de conduccion
 * o las de direccion
 * @param[in] value Nuevo valor del vector de alarmas a modificar en el atributo
 * correspondiente
 */
void DrivingConnectionManager::setAlarmsInfo(DeviceID element, short value) {
  if (element == DRIVE_ALARMS){
    alarms.flag = true;
    alarms.driveAlarms = value;
  }else if (element == STEERING_ALARMS){
    alarms.flag = true;
    alarms.steeringAlarms = value;
  }
}

/**
 * Método público que devuelve el atributo "alarms" de la clase que contiene la
 * última lectura de los vectores de alarms que pueden darse en el sistema
 * @return Atributo "alarms" de la clase
 */
AlarmsStruct DrivingConnectionManager::getAlarmsStruct(){
  return alarms;
}

/**
 * Método público modificador del atriburo "alarms" de la clase para indicar que
 * ha habido un cambio en cualquiera de los vectores de alarms que pueden darse
 * en el sistema
 * @param[in] flag Indica la posición del indicador de cambio en las alarmas del
 * vehículo
 */
void DrivingConnectionManager::setAlarmsStruct(bool flag) {
  alarms.flag = flag;
}

/**
 * Método público que comprueba si un elemento es crítico y por tanto debe ser 
 * contemplado para llevar a cabo el mecanismo de integridad
 * @param[in] element Elemento de consulta
 * @return Booleano que indica si el elemento es crítico o  no
 */
bool DrivingConnectionManager::isCriticalInstruction(DeviceID element) {
  if (element == GEAR
          || element == MT_GEAR
          || element == THROTTLE
          || element == MT_THROTTLE
          || element == CRUISING_SPEED
          || element == HANDBRAKE
          || element == MT_HANDBRAKE
          || element == ABRAKE
          || element == MT_BRAKE
          || element == STEERING
          || element == MT_STEERING) {
    return true;
  } else {
    return false;
  }
}

/**
 * Método público que comprueba si un elemento es de tipo MT para activación /
 * desactivación de actuadores
 * @param[in] element Elemento de consulta
 * @return Booleano que indica si el elemento es de tipo MT o no
 */
bool DrivingConnectionManager::isMTCommand(DeviceID element) {
  if (element == RESET
          || element == MT_GEAR
          || element == MT_THROTTLE
          || element == MT_HANDBRAKE
          || element == MT_BRAKE
          || element == MT_STEERING
          || element == MT_BLINKERS
          || element == MT_LIGHTS) {
    return true;
  } else {
    return false;
  }
}

/**
 * Método público que recibe un comando recibido del HMI y lo gestiona. Si hay
 * un comando hacia el mismo actuador en la cola de mensajes críticos
 * (esperando confirmación ACK), introduce la nueva orden en los registros de
 * actualización para su posterior tratamiento. En el caso de no haber un 
 * comando hacia el mismo actuador en la cola de mensajes críticos, lo transmite
 * al vehículo y lo encola
 * @param[in] command Comando a gestionar
 */
void DrivingConnectionManager::setCommand(FrameDriving command) {
  switch(command.element){
    case THROTTLE:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.throttle.flag = true;
        updateRegs.throttle.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.throttle.flag = false;
      }
      break;
    case ABRAKE:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.brake.flag = true;
        updateRegs.brake.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.brake.flag = false;
      }
      break;
    case HANDBRAKE:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.handBrake.flag = true;
        updateRegs.handBrake.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.handBrake.flag = false;
      }
      break;
    case CRUISING_SPEED:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.speed.flag = true;
        updateRegs.speed.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.speed.flag = false;
      }
      break;
    case STEERING:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.steering.flag = true;
        updateRegs.steering.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.steering.flag = false;
      }
      break;
    case GEAR:
      if(isCommandInQueue(command.element)){
        printf("Actualizacion de registros: (%d) %d := %d\n",command.id_instruccion,command.element,command.value);
        updateRegs.gear.flag = true;
        updateRegs.gear.value = command.value;
      }else{
        FrameDriving com;
        com.instruction = command.instruction;
        com.element = command.element;
        com.value = command.value;
        com.id_instruccion = countMsg;
        setCountCriticalMessages(countMsg+1);
        printf("Registro vacio, enviando directamente: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
        sendToVehicle(com);
        messageQueue.push_back(com);
        messagesTimeout->Enable();
        updateRegs.gear.flag = false;
      }
      break;
    default:
      FrameDriving com;
      com.instruction = command.instruction;
      com.element = command.element;
      com.value = command.value;
      com.id_instruccion = 0;
      sendToVehicle(com);
      break;
  };
}

/**
 * Método privado que comprueba si existe un comando específico de un actuador
 * en la cola de comandos críticos
 * @param[in] idDevice Identificador del actuador a buscar
 * @return Booleano que indica si se encuentra en la cola o no
 */
bool DrivingConnectionManager::isCommandInQueue(short idDevice) {
  for (vector<FrameDriving>::iterator it = messageQueue.begin(); it != messageQueue.end(); ++it) {
    if (idDevice == (*it).element) {
      return true;
    }
  }
  return false;
}

/**
 * Método privado que gestiona la recepción de un comando de tipo ACK por parte
 * del vehículo. Elimina el mensaje de la cola de mensajes críticos que estaba
 * esperando confirmación y comprueba si en el registro de actualización hay un
 * mensaje esperando a que se produzca dicha actualización. En caso afirmativo
 * se transmite dicho nuevo mensaje al vehículo y se encola
 * @param[in] element Identificador del elemento cuyo ACK se ha recibido
 * @param[in] id_instruccion Identificador de instrucción (mecanismo de 
 * integridad)
 */
void DrivingConnectionManager::manageACK(short element, short id_instruccion) {
  // Comprobar: QUE OCURRE CUANDO LLEGA A 1024??
  printf("Recibido ACK: ID_INS = %d ELM = %d\n",id_instruccion,element);
  vector<FrameDriving>::iterator it = messageQueue.begin();
  while(it < messageQueue.end()){
    if (id_instruccion >= (*it).id_instruccion) {
      messageQueue.erase(it);
      if(isThereCommandReady(element)){
        sendCommandFromUpdateRegs(element);
      }
    }else{
      it++;
    }
  }
  if(messageQueue.empty()){
    messagesTimeout->Disable();
    printf("Cola vacia\n");
  }else{
    messagesTimeout->Enable();
  }
}

/**
 * Método privado que gestiona la recepción de un comando de tipo NACK por parte
 * del vehículo. Realiza la retransmisión de todos los mensajes encolados en
 * la cola de comandos críticos con identificador de instrucción igual o 
 * posterior al que transporte el NACK recibido
 * @param[in] id_instruccion Identificador de la instrucción contenido en el 
 * NACK recibido
 */
void DrivingConnectionManager::manageNACK(short id_instruccion) {
  for (vector<FrameDriving>::iterator it = messageQueue.begin(); it != messageQueue.end(); ++it) {
    sendToVehicle(*it);
  }
}

/**
 * Método privado que comprueba si hay un comando hacia un actuador específico
 * esperando a ser transmitido al vehículo en los registros de actualización de
 * mensajes
 * @param[in] element Identificador del elemento a buscar en los registros
 * @return Booleano que indica si la búsqueda ha resultado positiva o no
 */
bool DrivingConnectionManager::isThereCommandReady(short element) {
  switch(element){
    case THROTTLE:
      return updateRegs.throttle.flag;
      break;
    case ABRAKE:
      return updateRegs.brake.flag;
      break;
    case HANDBRAKE:
      return updateRegs.handBrake.flag;
      break;
    case CRUISING_SPEED:
      return updateRegs.speed.flag;
      break;
    case STEERING:
      return updateRegs.steering.flag;
      break;
    case GEAR:
      return updateRegs.gear.flag;
      break;
    default:
      break;
  };
  return false;
}

/**
 * Método privado que rescata un mensaje de los registros de actualización, lo 
 * encola y lo transmite al vehículo.
 * @param[in] element Identificador del actuador cuyo mensaje debe ser obtenido
 * de los registros de actualización
 */
void DrivingConnectionManager::sendCommandFromUpdateRegs(short element) {
  FrameDriving com;
  com.instruction = A_SET;
  com.element = static_cast<DeviceID>(element);
  
  switch(element){
    case THROTTLE:
      updateRegs.throttle.flag = false;
      com.value = updateRegs.throttle.value;
      break;
    case ABRAKE:
      updateRegs.brake.flag = false;
      com.value = updateRegs.brake.value;
      break;
    case HANDBRAKE:
      updateRegs.handBrake.flag = false;
      com.value = updateRegs.handBrake.value;
      break;
    case CRUISING_SPEED:
      updateRegs.speed.flag = false;
      com.value = updateRegs.speed.value;
      break;
    case STEERING:
      updateRegs.steering.flag = false;
      com.value = updateRegs.steering.value;
      break;
    case GEAR:
      updateRegs.gear.flag = false;
      com.value = updateRegs.gear.value;
      break;
    default:
      return;
      break;
  };
  com.id_instruccion = countMsg;
  setCountCriticalMessages(countMsg+1);
  printf("Extraccion de registro: (%d) %d := %d\n",com.id_instruccion,com.element,com.value);
  sendToVehicle(com);
  messageQueue.push_back(com);
  messagesTimeout->Enable();
}

/**
 * Método público modificador del campo alarmas del atributo vehicleInfo
 * @param[in] id_alarm Identificador de la alarma
 */
void DrivingConnectionManager::setAlarmsInfo(short id_alarm) {
  vehicleInfo.alarms = id_alarm;
}

void DrivingConnectionManager::checkMessageTimeout() {
  if (messagesTimeout->GetTimed() >= FREC_1HZ) {
    printf("Timeout sin recibir ACK's :: Reenviando cola de comandos\n");
    if(!messageQueue.empty()){
      for (vector<FrameDriving>::iterator it = messageQueue.begin(); it != messageQueue.end(); ++it) {
        sendToVehicle(*it);
        messagesTimeout->Enable();
      }
    }
  } 
}

void DrivingConnectionManager::fillLastCommand(short element, short value) {
  switch (element) {
    case BLINKER_RIGHT:
      lastCommandsSent.blinkerRight = (bool)value;
      break;
    case BLINKER_LEFT:
      lastCommandsSent.blinkerLeft = (bool)value;
      break;
    case DIPSP:
      lastCommandsSent.dipsp = (bool)value;
      break;
    case DIPSS:
      lastCommandsSent.dipss = (bool)value;
      break;
    case DIPSR:
      lastCommandsSent.dipsr = (bool)value;
      break;
    case KLAXON:
      lastCommandsSent.klaxon = (bool)value;
      break;
    case GEAR:
      lastCommandsSent.gear = value;
      break;
    case THROTTLE:
      lastCommandsSent.thottle = value;
      break;
    case CRUISING_SPEED:
      lastCommandsSent.speed = value;      
      break;
    case HANDBRAKE:
      lastCommandsSent.parkingBrake = (bool)value;      
      break;
    case ABRAKE:
      lastCommandsSent.brake = value;      
      break;
    case STEERING:
      lastCommandsSent.steering = value;      
      break;
    default:
      break;
  };
}

DrivingInfo DrivingConnectionManager::getLastCommandsInfo() {
  return lastCommandsSent;
}

bool DrivingConnectionManager::checkSwitcher() {
    if(swPosition.flag){
        swPosition.flag = false;
        return true;
    }
    return false;
}

int DrivingConnectionManager::getSwitcher() {
    return swPosition.position;
}

void DrivingConnectionManager::sendReset() {
    FrameDriving frame;
    frame.instruction = A_SET;
    frame.id_instruccion = 0;
    frame.element = RESET;
    frame.value = 1;
    sendToVehicle(frame);
}
