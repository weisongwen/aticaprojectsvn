
/** 
 * @file  main.cpp
 * @brief Función principal del nodo FrontCamera del subsistema de control
 * @author Carlos Amores
 * @date 2013, 2014
 */

#include "RosNode_FrontCamera.h"

/**
 * Metodo principal del nodo. Inicializa modulos ROS y lanza el intercambio de 
 * mensajes con la cámara
 * @param[in] argc Número de argumentos
 * @param[in] argv Vector de argumentos
 * @return Entero distinto de 0 si ha habido problemas. 0 en caso contrario.
 */
int main(int argc, char** argv) {

  ros::init(argc, argv, "RosNode_Control_FrontCam");

  RosNode_FrontCamera *fc = new RosNode_FrontCamera();

  // Conexión
  if (fc->getDriverMng()->checkConnection()) {
    // Inicio de artefactos ROS
    fc->initROS();

    // Espera a permiso para comenzar a operar ROSNODE_OK
    ROS_INFO("[Control] FrontCamera - Esperando activacion de nodo");
    while (fc->getNodeStatus() != NODESTATUS_OK) {
      ros::spinOnce();
    }
    ROS_INFO("[Control] FrontCamera - Nodo listo para operar");

    // Temporizador de requerimiento de informacion
    clock_t initTime, finalTime;
    initTime = clock();

    //Bucle principal
    while (ros::ok() && fc->getNodeStatus() != NODESTATUS_OFF) {

      // Recepcion de mensaje
      ros::spinOnce();
      // Comprobación del temporizador y requerimiento de info
      finalTime = clock() - initTime;

      if (((double) finalTime / ((double) CLOCKS_PER_SEC)) >= FREC_2HZ) {

        // Clear del timer
        initTime = clock();

        // Envio de parametros (activo para no perder informacion)
        fc->getDriverMng()->sendSetToDevice(ORDER_PAN, fc->getDriverMng()->getPan());
        fc->getDriverMng()->sendSetToDevice(ORDER_TILT, fc->getDriverMng()->getTilt());
        fc->getDriverMng()->sendSetToDevice(ORDER_ZOOM, fc->getDriverMng()->getZoom());

        // Requerimiento de informacion de dispositivo
        LensPosition lensPos = fc->getDriverMng()->getPosition();
        if (lensPos.state) {
          CITIUS_Control_FrontCamera::msg_frontCameraInfo fcMsg;
          fcMsg.pan = lensPos.pan / 50; // * (100/5000) Conversion de formato camara
          fcMsg.tilt = lensPos.tilt / 50; // * (100/5000) Conversion de formato camara
          fcMsg.zoom = lensPos.zoom / 50; // * (100/5000) Conversion de formato camara
          fc->getPubFrontCameraInfo().publish(fcMsg);
          ROS_INFO("[Control] FrontCamera - Enviado mensaje con informacion de camara");
        }
      }
    }
  } else {
    ROS_INFO("[Control] FrontCamera - No se puede conectar con la camara");
  }
  ROS_INFO("[Control] FrontCamera - Nodo finalizado");
  return 0;
}

