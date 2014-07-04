
/* 
 * File:   CONSTANT_GPS.h
 * Author: carlosamores
 *
 * Created on 21 de marzo de 2013, 10:13
 */

#ifndef CONSTANT_H
#define	CONSTANT_H

#ifdef	__cplusplus
extern "C" {
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* CONSTANT_H */


// Errores
#define SERIAL_ERROR 0
#define FRAME_ERROR  1


// Funcion: ALIGNMENTMODE
#define ALIGNMENTMODE_UNAIDED "UNAIDED"
#define ALIGNMENTMODE_AIDED_STATIC "AIDED_STATIC"
#define ALIGNMENTMODE_AIDED_TRANSFER "AIDED_TRANSFER"

//Funcion: APPLYVEHICLEBODYROTATION
#define APPLYVEHICLEBODYROTATION_ENABLE "ENABLE"
#define APPLYVEHICLEBODYROTATION_DISABLE "DISABLE"

// Funcion: CANCONFIG
#define CANCONFIG_ENABLE "ENABLE"
#define CANCONFIG_DISABLE "DISABLE"
#define CANCONFIG_PORT_CAN1 "CAN1"
#define CANCONFIG_PORT_CAN2 "CAN2"
#define CANCONFIG_SOURCE_GPS "GPS"
#define CANCONFIG_SOURCE_INSGPS "INSGPS"


//Funcion: EXTHDGOFFSET
/*Sin constantes definidas*/

// Funcion: FRESET
#define FRESET_STANDARD "STANDARD"
#define FRESET_COMMAND "COMMAND"
#define FRESET_GPSALMANAC "GPSALMANAC"
#define FRESET_GPSEPHEM "GPSEPHEM"
#define FRESET_MODEL "MODEL"
#define FRESET_CLKCALIBRATION "CLKCALIBRATION"
#define FRESET_SBASALMANAC "SBASALMANAC"
#define FRESET_LAST_POSITION "LAST_POSITION"
#define FRESET_VEHICLE_BODY_R "VEHICLE_BODY_R"
#define FRESET_INS_LEVER_ARM "INS_LEVER_ARM"

//Funcion: INSCOMMAND
#define INSCOMMAND_ENABLE "ENABLE"
#define INSCOMMAND_DISABLE "DISABLE"

//Funcion: INSPHASEUPDATE
#define INSPHASEUPDATE_ENABLE "ENABLE"
#define INSPHASEUPDATE_DISABLE "DISABLE"

//Funcion: INSZUPT
/*Sin constantes definidas*/

//Funcion: INSZUPTCONTROL
#define INSZUPTCONTROL_ENABLE "ENABLE"
#define INSZUPTCONTROL_DISABLE "DISABLE"

// Funcion: NMEATALKER
#define NMEATALKER_GP "GP"
#define NMEATALKER_AUTO "AUTO"

//Funcion: RVBCALIBRATE
#define RVBCALIBRATE_ENABLE "ENABLE"
#define RVBCALIBRATE_DISABLE "DISABLE"
#define RVBCALIBRATE_RESET "RESET"

//Funcion: SETIMUORIENTATION
#define SETIMUORIENTATION_AUTO   "0"
#define SETIMUORIENTATION_X_UP   "1"
#define SETIMUORIENTATION_X_DOWN "2"
#define SETIMUORIENTATION_Y_UP   "3"
#define SETIMUORIENTATION_Y_DOWN "4"
#define SETIMUORIENTATION_Z_UP   "5"
#define SETIMUORIENTATION_Z_DOWN "6"

//Funcion: SETIMUTOANTOFFSET
/*Sin constantes definidas*/

//Funcion: SETIMUTOANTOFFSET2
/*Sin constantes definidas*/

//Funcion: SETINITATTITUDE
/*Sin constantes definidas*/

//Funcion: SETINITAZIMUTH
/*Sin constantes definidas*/

//Funcion: SETINSOFFSET
/*Sin constantes definidas*/

//Funcion: SETMARK1OFFSET
/*Sin constantes definidas*/

//Funcion: SETWHEELPARAMETERS
/*Sin constantes definidas*/

//Funcion: VEHICLEBODYROTATION
/*Sin constantes definidas*/


//Tipo de tramas
#define TT_ERROR -1
#define TT_INSPVASA 0
#define TT_CORRIMUDATASA 1
#define TT_BESTGPSPOSA 2
#define TT_INSPOSA 3
#define TT_HEADINGA 4
#define TT_GPSVELA 5
#define TT_BESTLEVERARMA 6
#define TT_INSPVAA 7

// Estados del GPS+IMU / ERRORES
/*
#define GPS_GLOBAL_ERROR 0
#define DATA_RCV_FAILED 1 
#define CONFIG_OPEN_SERIALPORT_ERROR 2
#define CONFIG_CONFIG_SERIALPORT_ERROR 3
#define CONFIG_ALIGNMENT_MODE_ERROR 4
#define CONFIG_INITIAL_AZIMUTH_ERROR 5
#define CONFIG_ANTOFFSET_ERROR 6
#define INS_INACTIVE 7
#define INS_ALIGNING 8
#define INS_SOLUTION_NOT_GOOD 9
#define INS_BAD_GPS_AGREEMENT 10
#define INS_ALIGNMENT_COMPLETE 11
#define INSUFFICIENT_OBS 12
#define NO_CONVERGENCE 13
#define SINGULARITY 14
#define COV_TRACE 15
#define TEST_DIST 16
#define COLD_START 17
#define V_H_LIMIT 18
#define VARIANCE 19
#define RESIDUALS 20
#define DELTA_POS 21
#define NEGATIVE_VAR 22
#define INTEGRITY_WARNING 23
#define IMU_UNPLUGGED 24
#define PENDING 25
#define INVALID_FIX 26
#define UNAUTHORIZED_STATE 27
 * */

#define MAX_NUM_OF_EMPTY_FRAMES 4



