/* 
 * File:   main.cpp
 * Author: atica
 *
 * Created on 23 de julio de 2014, 11:34
 */


#include "constant.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    socketDescriptor = socket(AF_INET, SOCK_STREAM, 0);
    
    if (socketDescriptor < 0) {

        return -1;
        
    } else {
        
        struct hostent *he;

        struct sockaddr_in server;

        if ((he = gethostbyname(IP_CAMERA)) == NULL) {
            return -1;
        }

        if ((socketDescriptor = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
            return -1;
        }

        server.sin_family = AF_INET;
        server.sin_port = htons(PORT_CAMERA);
        server.sin_addr = *((struct in_addr *) he->h_addr);
        
        bzero(&(server.sin_zero), 8);

        if (connect(socketDescriptor, (struct sockaddr *) &server, sizeof (struct sockaddr)) == -1) {
            
            return -1;

        }else{
             /*printf("Conectado a la camara AXIS:\n");
            
            printf("Solicitando ZOOM 5000 ... \n");
            if(sentSetToDevice(ORDER_ZOOM, 5000)){
                printf("OK\n");
            }else{
                printf("ERROR\n");
            }
           
            
            printf("Solicitando TILT 50 ... ");
            if(sentSetToDevice(ORDER_TILT, 50)){
                printf("OK\n");
            }else{
                printf("ERROR\n");
            }
            
            
            printf("Solicitando PAN 50 ... ");
            if(sentSetToDevice(ORDER_PAN, 50)){
                printf("OK\n");
            }else{
                printf("ERROR\n");
            }
            
            printf("Solicitando posicion...\n");
            */
            LensPosition lp = getPosition();
            
            if(lp.state){
                printf("Zoom: %f\n",lp.zoom);
                printf("Pan: %f\n",lp.pan);
                printf("Tilt: %f\n",lp.tilt); 
            }else{
                printf("ERROR obteniendo la posicion\n");
            }            
            
        }

        return 0;
    }

}

/*******************************************************************************
                ENVIAR ORDEN AL DISPOSITIVO                                     
*******************************************************************************/

bool sentSetToDevice(short order, float value){
    
    stringstream stream;
    stream << "GET http://" << AUTH_CAM_USER << "@" << AUTH_CAM_PASS << ":" << IP_CAMERA << PTZ_ROUTE;
    switch(order){
        case ORDER_ZOOM:
            stream << "zoom=";
            break;
        case ORDER_TILT:
            stream << "tilt=";
            break;
        case ORDER_PAN:
            stream << "pan=";
            break;
        default:
            stream.str().clear();
            break;
    }
    
    if(stream.str().size()==0){
        printf("Error generando el comando\n");
        return false;
    }
    
    stream << value << "\r\n";
    
    printf("Comando generado: %s",stream.str().c_str());
    
    int nBytesSent = send(socketDescriptor,stream.str().c_str(),strlen(stream.str().c_str()),0);
    
    if(nBytesSent < 0){
        printf("Error en la escritura\n");
        return false;
    }
    
    // Lectura y obtencion del ack
    char respuesta[256];
    
    int nBytesRead = 0;
    while(nBytesRead == 0){
        nBytesRead = recv(socketDescriptor,respuesta,256,0);
    }
    printf("Respuesta: %s\n",respuesta);
    
    return true;
}

/*******************************************************************************
                OBTENER LA POSICION DE LA LENTE                              
*******************************************************************************/

LensPosition getPosition(){
    
    LensPosition pos;
    
    stringstream stream;
    stream << "GET http://" << AUTH_CAM_USER << "@" << AUTH_CAM_PASS << ":" << IP_CAMERA << PTZ_ROUTE << "query=position\r\n";    
    printf("Comando generado: %s",stream.str().c_str());
    
    int nBytesSent = send(socketDescriptor,stream.str().c_str(),strlen(stream.str().c_str()),0);
    
    if(nBytesSent < 0){
        printf("Error en la escritura\n");
        pos.state = false;
    }

    // Lectura y obtencion de los datos
    char respuesta[256];
    int nBytesRead = recv(socketDescriptor,respuesta,256,0);
    
    if(nBytesRead > 0 ) {
        
        pos.state = true;
        pos.pan = extractPan(respuesta);
        pos.tilt = extractTilt(respuesta);
        pos.zoom = extractZoom(respuesta);
    
    }else{
        
        pos.state = false;
        pos.pan = 0;
        pos.tilt = 0;
        pos.zoom = 0;
    
    }
    
    return pos;
}

/*******************************************************************************
                EXTRACCION DE VALORES DE LA RESPUESTA DE LA CAMARA                          
*******************************************************************************/

float extractZoom(char cadena[256]){
    string resp = cadena;
    int index=resp.find("zoom=");
    string value;
    for(int i = index+5; i < resp.size(); i++){
        if(resp.at(i)=='\r'){
            i = resp.size();
        }else{
            value.push_back(resp.at(i));
        }
    }
    return (float)atof(value.c_str());
}

float extractTilt(char cadena[256]){
    string resp = cadena;
    int index=resp.find("tilt=");
    string value;
    for(int i = index+5; i < resp.size(); i++){
        if(resp.at(i)=='\r'){
            i = resp.size();
        }else{
            value.push_back(resp.at(i));
        }
    }
    return (float)atof(value.c_str());
}

float extractPan(char cadena[256]){
    string resp = cadena;
    int index=resp.find("pan=");
    string value;
    for(int i = index+4; i < resp.size(); i++){
        if(resp.at(i)=='\r'){
            i = resp.size();
        }else{
            value.push_back(resp.at(i));
        }
    }
    return (float)atof(value.c_str());
}