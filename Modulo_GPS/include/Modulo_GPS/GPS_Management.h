
/** 
 * @file  GPS_Management.h
 * @brief Declara el tipo de la clase "GPS_Management"
 * - La clase implementa la comunicación con el dispositivo GPS+IMU
 * @author Carlos Amores
 * @date 2013, 2014, 2015
 * @addtogroup GPS
 * @{
 */

#include <string>
#include "Modulo_GPS/constant_gps.h"
#include "../../Common_files/include/Common_files/constant.h"
#include "PortSerial.h"
#include <iostream>
#include "CksFrame.h"
#include "TypeConverter.h"

using namespace std;

/**
 * \struct Response
 * \brief Estructura para gestión de respuestas del GPS+IMU
 */
struct Response{
    bool ok;
    string header;
    string headerdata;
    string data;
    int error;
    string checksum;
};

/**
 * \struct Bestgpsvel
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje BESTGPSVEL
 */
struct Bestgpsvel{
    string sol_status;
    string vel_type;
    float latency;
    float age;
    double hor_spd;
    double trk_gnd;
    double ver_spd;
    float reserved;
};

/**
 * \struct Bestgpspos
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje BESTGPSPOS
 */
struct Bestgpspos{
    short state;
    string sol_status;
    string pos_type;
    double lat;
    double lon;
    double hgt;
    float undulation;
    string datum_id;
    float lat_dev;
    float lon_dev;
    float hgt_dev;
    string stn_id;
    float diff_age;
    float sol_age;
    unsigned char obs;
    unsigned char gpsL1;
    unsigned char l1;
    unsigned char l2;
    unsigned char res1;
    unsigned char res2;
    unsigned char res3;
    unsigned char res4;
};

/**
 * \struct Bestleverarm
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje BESTLEVERALARM
 */
struct Bestleverarm{
    double x_offset;
    double y_offset;
    double z_offset;
    double x_uncertainty;
    double y_uncertainty;
    double z_uncertainty;
    int imapping;
};

/**
 * \struct Corrimudata
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje CORRIMUDATA
 */
struct Corrimudata{
    unsigned long week;
    double seconds;
    double roll_rate;
    double pitch_rate;
    double yaw_rate;
    double lateral_acc;
    double longitudinal_acc;
    double vertical_acc;
};

/**
 * \struct Inspvas
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje INSPVAS
 */
struct Inspvas{
    unsigned long week;
    double seconds;
    double lat;
    double lon;
    double hgt;
    double north_velocity;
    double east_velocity;
    double up_velocity;
    double roll;
    double pitch;
    double azimuth;
    string status;
};

/**
 * \struct Inspva
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje INSPVA
 */
struct Inspva{
    short state;
    unsigned long week;
    double seconds;
    double lat;
    double lon;
    double hgt;
    double north_velocity;
    double east_velocity;
    double up_velocity;
    double roll;
    double pitch;
    double azimuth;
    string status;
};

/**
 * \struct Inspos
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje INSPOS
 */
struct Inspos{
    unsigned long week;
    double seconds;
    double lat;
    double lon;
    double hgt;
    string status;
};

/**
 * \struct Heading
 * \brief Estructura para alamacenamiento de datos obtenidos del mensaje HEADING
 */
struct Heading{
    string sol_stat;
    string pos_type;
    float length;
    float heading;
    float pitch;
    float res;
    float hdg_std_dev;
    float ptch_std_dev;
    string stn_id;
    unsigned char observations;
    unsigned char num_satellites;
    unsigned char obs;
    unsigned char multi;
    unsigned char res2;
    unsigned char ext_sol_stat;
    unsigned char res3;
    unsigned char sig_mask;
};

/**
 * \class GPS_Management
 * \brief Clase que representa al driver de comunicación con el dispositivo
 * GPS+IMU
 */
class GPS_Management
{
	private:
                string mensaje;
                // Gestion del puerto serie
                PortSerial port;
                bool port_opened;
                // Estructuras de los mensajes a recibir
                Bestgpsvel bestgpsvel;
                Bestgpspos bestgpspos;
                Inspva inspva;
                Inspvas inspvas;
                Bestleverarm bestleverarm;
                Corrimudata corrimudata;
                Inspos inspos;
                Heading heading;
	public:
                // Constructor
		GPS_Management();
                // Receptor de correcciones
                void setCom2ToRcvCorrections();                
                // Getters de los atributos
                Bestgpsvel getGPSVel();
                Bestgpspos getGPSPos();
                Inspvas getInspVas();
                Inspva getInspVa();
                Bestleverarm getLeverarm();
                Corrimudata getCorrIMUData();
                Inspos getInsPos();
                Heading getHeading();
                // Funciones de configuracion
		bool gps_conf_alignmentmode(string mode);
                bool gps_conf_applyvehiclebodyrotation(string mode);
                bool gps_conf_canconfig(string port, string mode, string bitrate, int base, int tx_max, string source);
                bool gps_conf_exthdgoffset(double heading,double headingSTD, double pitch, double pitchSTD);
                bool gps_conf_freset(string target);
                bool gps_conf_inscommand(string state);
                bool gps_conf_insphaseupdate(string mode);
                bool gps_conf_inszupt();
                bool gps_conf_inszuptcontrol(string state);
                bool gps_conf_nmeatalker(string id);
                bool gps_conf_rvbcalibrate(string state);
                bool gps_conf_setimuorientation(string orientation);
                bool gps_conf_setimutoantoffset(double x,double y,double z,double a,double b,double c);
                bool gps_conf_setimutoantoffset2(double x,double y,double z,double a,double b,double c);
                bool gps_conf_setinitattitude(double pitch,double roll,double azimuth,double pitchSTD,double rollSTD, double azSTD);
                bool gps_conf_setinitazimuth(double azimuth,double azSTD);
                bool gps_conf_setinsoffset(double x,double y,double z);
                bool gps_conf_setmark1offset(double x,double y,double z,double alphaOffset,double betaOffset,double gammaOffset);
                bool gps_conf_setwheelparameters(unsigned short ticks,double circ, double spacing);
                bool gps_conf_vehiclebodyrotation(double xAngle,double yAngle,double zAngle, double a, double b,double c);
                //Manejador de mensajes LOG
                bool gps_log_general(string command, string type);
                Response reception_management(bool confirmation, bool data);
                void analizeFrame(string frame,Response* resp);
                string* getData(int numData,string data);
                int calcChecksum(string dataFrame);
                string create_message(string command, int num_param, string options[]);
                //Funciones de adquisición de datos
                bool gps_adq_bestgpsvel(Response res);
                bool gps_adq_bestgpspos(Response res);
                bool gps_adq_inspva(Response res);
                bool gps_adq_inspvas(Response res);
                bool gps_adq_bestleverarm(Response res);
                bool gps_adq_corrimudata(Response res);
                bool gps_adq_inspos(Response res);
                bool gps_adq_heading(Response res);
                bool isPortOpened();
                // Recepcion continua de datos
                int rcvData();
                // Obtencion del estado del GPS
                short getStateOfGPS(string);
                // Obtencion del estado de la IMU
                short getStateOfIMU(string);
};

/**
 * @}
 */