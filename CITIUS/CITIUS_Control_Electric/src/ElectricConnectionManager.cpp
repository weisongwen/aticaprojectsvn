
/** 
 * @file  ElectricConnectionManager.cpp
 * @brief Implementacion de la clase "ElectricConnectionManager"
 * @author Carlos Amores
 * @date 2013, 2014
 */

#include "ElectricConnectionManager.h"

/** Constructor de la clase*/
ElectricConnectionManager::ElectricConnectionManager() {
  socketDescriptor = -1;
  countMsg = 1;
  electricInfo.battery_level = 0;
  electricInfo.battery_voltage = 0;
  electricInfo.battery_current = 0;
  electricInfo.battery_temperature = 0;
  electricInfo.supply_alarms = 0;
  systemSupplies.controlSystemSupply = 0;
  systemSupplies.controlSystemSupply5 = 0;
  systemSupplies.controlSystemSupply12 = 0;
  systemSupplies.controlSystemSupply24 = 0;
  systemSupplies.controlSystemSupply48 = 0;
  systemSupplies.driveSystemSupply = 0;
  systemSupplies.driveSystemSupply5 = 0;
  systemSupplies.driveSystemSupply12 = 0;
  systemSupplies.driveSystemSupply24 = 0;
  systemSupplies.driveSystemSupply48 = 0;
  systemSupplies.commSystemSupply = 0;
  systemSupplies.commSystemSupply5 = 0;
  systemSupplies.commSystemSupply12 = 0;
  systemSupplies.commSystemSupply24 = 0;
  systemSupplies.commSystemSupply48 = 0;
  systemSupplies.observationSystemSupply = 0;
  systemSupplies.observationSystemSupply5 = 0;
  systemSupplies.observationSystemSupply12 = 0;
  systemSupplies.observationSystemSupply24 = 0;
  systemSupplies.observationSystemSupply48 = 0;
  turnOff = false;
  alarms.flag = false;
  alarms.supplyAlarms = 0x0000;
}

/** Destructor de la clase*/
ElectricConnectionManager::~ElectricConnectionManager() {

}

/**
 * Método público que envía la información de una trama al vehículo haciendo uso 
 * del socket de comunicación
 * @param[in] frame Trama a enviar via socket al vehículo 
 */
void ElectricConnectionManager::sendToVehicle(FrameDriving frame) {
  char bufData[8];
  memcpy(&bufData[0], &frame.instruction, sizeof (frame.instruction));
  memcpy(&bufData[2], &frame.id_instruction, sizeof (frame.id_instruction));
  memcpy(&bufData[4], &frame.element, sizeof (frame.element));
  memcpy(&bufData[6], &frame.value, sizeof (frame.value));
  send(socketDescriptor, bufData, sizeof (bufData), 0);
  usleep(1000);
}

/**
 * Método público que envía una serie de tramas de tipo GET solicitando la 
 * información del vehículo
 */
void ElectricConnectionManager::reqElectricInfo() {
  FrameDriving frame;
  frame.instruction = GET;
  frame.id_instruction = -1;
  frame.value = -1;
  frame.element = BATTERY_LEVEL;
  sendToVehicle(frame);
  frame.element = BATTERY_VOLTAGE;
  sendToVehicle(frame);
  frame.element = BATTERY_CURRENT;
  sendToVehicle(frame);
  frame.element = BATTERY_TEMPERATURE;
  sendToVehicle(frame);
}

/**
 * Método público que envía un mensaje para SET para solicitar el inicio del 
 * suministro eléctrico del vehículo
 */
void ElectricConnectionManager::setTurnOn() {
  FrameDriving frame;
  frame.instruction = SET;
  frame.id_instruction = countMsg;
  countMsg++;
  frame.element = SUPPLY_TURN_ON;
  frame.value = 1;
  // Cola de comandos criticos
  messageQueue.push_back(frame);
  // Envio a vehículo
  sendToVehicle(frame);
}

/**
 * Método público que envía un mensaje de confirmacion (SET) para indicar el 
 * fin de un apagado ordenado de los distintos módulos del vehículo
 */
void ElectricConnectionManager::setTurnOff() {
  FrameDriving frame;
  frame.instruction = SET;
  frame.id_instruction = countMsg;
  countMsg++;
  frame.element = TURN_OFF;
  frame.value = 1;
  sendToVehicle(frame);
}

/**
 * Método público que realiza una lectura por el socket de comunicación con el 
 * vehículo y obtiene una trama en caso de que el propio vehículo la haya 
 * enviado. La clasifica según el elemento al que hace referencia y procede a su 
 * tratamiento
 * @return Booleano que indica si se ha llevado a cabo una lectura via socket
 */
bool ElectricConnectionManager::checkForVehicleMessages() {
  char bufData[8];
  if (recv(socketDescriptor, bufData, sizeof (bufData), 0) > 0) {
    FrameDriving fdr;
    short aux;
    memcpy(&aux, &bufData[0], sizeof (aux));
    fdr.instruction = static_cast<CommandID> (aux);
    memcpy(&fdr.id_instruction, &bufData[2], sizeof (fdr.id_instruction));
    memcpy(&aux, &bufData[4], sizeof (aux));
    fdr.element = static_cast<DeviceID> (aux);
    memcpy(&fdr.value, &bufData[6], sizeof (fdr.value));
    if (fdr.instruction == ACK) {
      informResponse(true, fdr.id_instruction);
    } else if (fdr.instruction == NACK) {
      RtxStruct rtxList = informResponse(false, fdr.id_instruction);
      for (int i = 0; i < rtxList.numOfMsgs; i++) {
        sendToVehicle((FrameDriving) rtxList.msgs.at(i));
      }
    } else if (fdr.instruction == INFO) { 
      if (fdr.element == SUPPLY_ALARMS) {
        setVehicleInfo(fdr.element, fdr.value);
      } else if (fdr.element == TURN_OFF) {
        ROS_INFO("[Control] Electric - Preparando el apagado del sistema");
        turnOff = true;
      } else { // INFO corriente o alarmas
        setVehicleInfo(fdr.element, fdr.value);
      }
    }
    return true;
  } else {
    return false;
  }
}

/**
 * Método público consultor del atributo "electricInfo" de la clase que almacena 
 * la información de la última lectura realizada del vehículo
 * @return Atributo "electricInfo" de la clase
 */
ElectricInfo ElectricConnectionManager::getVehicleInfo() {
  return electricInfo;
}

/**
 * Método público modificador del atributo "electricInfo" de la clase con la 
 * información de un dispositivo eléctrico concreto
 * @param[in] id_device Identificador del dispositivo a modificar
 * @param[in] value Valor de lectura del dispositivo a modificar
 */
void ElectricConnectionManager::setVehicleInfo(DeviceID id_device, short value) {
  switch (id_device) {
    case BATTERY_LEVEL:
      electricInfo.battery_level = value;
      break;
    case BATTERY_VOLTAGE:
      electricInfo.battery_voltage = value;
      break;
    case BATTERY_CURRENT:
      electricInfo.battery_current = value;
      break;
    case BATTERY_TEMPERATURE:
      electricInfo.battery_temperature = value;
      break;
    case SUPPLY_ALARMS:
      alarms.flag = true;
      alarms.supplyAlarms = value;
      break;
    case CONTROL_SYSTEM_SUPPLY:
      systemSupplies.controlSystemSupply = value;
      break;
    case CONTROL_SYSTEM_SUPPLY_5:
      systemSupplies.controlSystemSupply5 = value;
      break;
    case CONTROL_SYSTEM_SUPPLY_12:
      systemSupplies.controlSystemSupply12 = value;
      break;
    case CONTROL_SYSTEM_SUPPLY_24:
      systemSupplies.controlSystemSupply24 = value;
      break;
    case CONTROL_SYSTEM_SUPPLY_48:
      systemSupplies.controlSystemSupply48 = value;
      break;
    case DRIVE_SYSTEM_SUPPLY:
      systemSupplies.driveSystemSupply = value;
      break;
    case DRIVE_SYSTEM_SUPPLY_5:
      systemSupplies.driveSystemSupply5 = value;
      break;
    case DRIVE_SYSTEM_SUPPLY_12:
      systemSupplies.driveSystemSupply12 = value;
      break;
    case DRIVE_SYSTEM_SUPPLY_24:
      systemSupplies.driveSystemSupply24 = value;
      break;
    case DRIVE_SYSTEM_SUPPLY_48:
      systemSupplies.driveSystemSupply48 = value;
      break;
    case COMM_SYSTEM_SUPPLY:
      systemSupplies.commSystemSupply = value;
      break;
    case COMM_SYSTEM_SUPPLY_5:
      systemSupplies.commSystemSupply5 = value;
      break;
    case COMM_SYSTEM_SUPPLY_12:
      systemSupplies.commSystemSupply12 = value;
      break;
    case COMM_SYSTEM_SUPPLY_24:
      systemSupplies.commSystemSupply24 = value;
      break;
    case COMM_SYSTEM_SUPPLY_48:
      systemSupplies.commSystemSupply48 = value;
      break;
    case OBSERVATION_SYSTEM_SUPPLY:
      systemSupplies.observationSystemSupply = value;
      break;
    case OBSERVATION_SYSTEM_SUPPLY_5:
      systemSupplies.observationSystemSupply5 = value;
      break;
    case OBSERVATION_SYSTEM_SUPPLY_12:
      systemSupplies.observationSystemSupply12 = value;
      break;
    case OBSERVATION_SYSTEM_SUPPLY_24:
      systemSupplies.observationSystemSupply24 = value;
      break;
    case OBSERVATION_SYSTEM_SUPPLY_48:
      systemSupplies.observationSystemSupply48 = value;
      break;
    default:
      break;
  }
}

/**
 * Método público consultor  del atributo "countMsg" de la clase utilizado para 
 * llevar el conteo de los mensajes criticos (mecanismo de integridad)
 * @return Atributo "countMsg" de la clase
 */
short ElectricConnectionManager::getCountCriticalMessages() {
  return countMsg;
}

/**
 * Método público modificador del atributo "countMsg" de la clase utilizado para
 * llevar el conteo del los mensajes críticos (mecanismo de integridad). 
 * Contempla que se lleve a cabo según un contador incremental con intervalo 
 * 1..1024
 * @param[in] cont Nuevo valor para el atributo "countMsg"
 */
void ElectricConnectionManager::setCountCriticalMessages(short cont) {
  countMsg = cont;
  if (countMsg == 1025)
    countMsg = 1;
}

/**
 * Método público consultor del atributo "turnOff" de la clase utilizado para 
 * indicar que se ha recibido una petición de apagado ordenado por parte del 
 * vehículo
 * @return Atributo "turnOff" de la clase
 */
bool ElectricConnectionManager::getTurnOffFlag() {
  return turnOff;
}

/**
 * Método público consultor del atributo "alarms" de la clase que indica la
 * última lectura realizada del vector de alarmas del módulo eléctrico del 
 * Payload de conduccion del vehículo
 * @return Atributo "alarms" de la clase
 */
SupplyAlarmsStruct ElectricConnectionManager::getSupplyAlarmsStruct() {
  return alarms;
}

/**
 * Método público modificador del atributo "alarms" de la clase que se 
 * actualiza cuando se detecta un cambio en el vector de alarmas del vehículo o 
 * cuando se ha llevado a cabo el tratamiento tras su detección
 * @param[in] flag Indica si es para puesta a cero del indicador de cambio
 */
void ElectricConnectionManager::setSupplyAlarmsStruct(bool flag) {
  alarms.flag = flag;
}

/**
 * Método público que comprueba si un elemento es crítico y por tanto debe ser 
 * contemplado para llevar a cabo el mecanismo de integridad
 * @param[in] element Elemento de consulta
 * @return Booleano que indica si el elemento es crítico o  no
 */
bool ElectricConnectionManager::isCriticalInstruction(DeviceID element) {
  if (element == SUPPLY_TURN_ON) {
    return true;
  } else {
    return false;
  }
}

/**
 * Método privado para el tratamiento de la cola de mensajes tras la recepcion 
 * de un mensaje de confirmación (ACK) o negación (NACK). En el caso de recibir 
 * un ACK, se desencolan todos los mensajes cuyo campo "id_instruccion" es menor 
 * al que se incluye en la trama del propio ACK. En el caso de recibir un NACK, 
 * se retransmiten todos los mensajes de la cola cuyo campo "id_instruccion" sea
 * menor o igual que el que se incluye en la trama del propio ACK y se elimina
 * el resto
 * @param[in] ack Indica si se ha recibido un ACK (true) o un NACK (false) 
 * @param[in] id_instruction Indica el campo "id_instruccion" (cuenta) del mensaje
 * recibido del vehículo
 * @return Estructura con el numero de mensajes a retransmitir (en caso de
 * haberlos) y una lista de dichos mensajes.
 */
RtxStruct ElectricConnectionManager::informResponse(bool ack, short id_instruction) {
  RtxStruct ret;
  ret.numOfMsgs = 0;
  vector<FrameDriving>::iterator it = messageQueue.begin();
  if (ack) { // ACK
    if (id_instruction == (*it).id_instruction) { // Primer elemento y requerido coinciden
      messageQueue.erase(it);
    } else if (id_instruction > (*it).id_instruction) { // Confirmacion de varios elementos
      while (id_instruction >= (*it).id_instruction) {
        messageQueue.erase(it);
      }
    }
  } else { // NACK
    while (it != messageQueue.end()) {
      ret.numOfMsgs++;
      ret.msgs.push_back((*it));
      it++;
    }
  }
  return ret;
}