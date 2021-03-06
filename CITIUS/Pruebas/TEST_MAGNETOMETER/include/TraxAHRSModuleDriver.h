
/** 
 * @file  TraxAHRSModuleDriver.h
 * @brief Declara el tipo de la clase "TraxAHRSModuleDriver"
 * - La clase implementa la comunicación con el dispositivo magnetómetro TRAX
 * AHRS Module encargado de obtener la orientación del vehículo
 * @author Carlos Amores
 * @date 2013, 2014
 * @addtogroup MagnetometerDriver
 * @{
 */

#ifndef TRAXAHRSMODULEDRIVER_H
#define	TRAXAHRSMODULEDRIVER_H

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h> 
#include <string.h>
#include <complex>
#include <vector>
#include "constant.h"
#include <stdint.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "crc16calc.h"

using namespace std;


/**
 * \class TraxAHRSModuleDriver
 * \brief Clase que representa al driver de comunicación con el dispositivo
 * magnetómetro Trax AHRS Module
 */
class TraxAHRSModuleDriver {
private:
  // Datos recibidos
  TraxMeasurement oriInfo;
  // Socket
  int socketDescriptor;
  struct hostent *he;
  struct sockaddr_in server;  
  // Operaciones a bajo nivel
  string getValueFromConfig(string parameter);
  TraxMsg kGetModInfo();
  TraxMsg kGetData();
  TraxMsg kSetDataComponents();
  void sendToDevice(TraxMsg);
  void rcvResponse();
  TraxMsg mngPacket(std::vector< char>);
  TraxMeasurement unpackPayload(std::vector<char>);
  // Conversion de tipos
  float hexa2float(std::vector<char>);
  double hexa2double(std::vector<unsigned char>);
  int hexa2int(std::vector<unsigned char>);
  short hexa2short(std::vector<char>);
  std::vector<char> shortToHexa(short);
public:
  TraxAHRSModuleDriver();
  ~TraxAHRSModuleDriver();
  // Operaciones a alto nivel
  bool connectToDevice();
  void disconnectDevice();
  void configureDevice();
  bool getData();
  // Retorno de estructura de datos
  TraxMeasurement getInfo();
};

#endif	/* TRAXAHRSMODULEDRIVER_H */

/**
 * @}
 */

