/*****************************************************************************
 *  Copyright (c) 2009, OpenJAUS.com
 *  All rights reserved.
 *  
 *  This file is part of OpenJAUS.  OpenJAUS is distributed under the BSD 
 *  license.  See the LICENSE file for details.
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of the University of Florida nor the names of its 
 *       contributors may be used to endorse or promote products derived from 
 *       this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ****************************************************************************/
// File Name: telemeterInfo10Message.h
//
// Written By: Danny Kent (jaus AT dannykent DOT com), Tom Galluzzo 
//
// Version: 3.3.0b
//
// Date: 09/08/09
//
// Description: This file defines the attributes of a TelemeterInfo10Message

#ifndef TELEMETER_INFO_10_MESSAGE_H
#define TELEMETER_INFO_10_MESSAGE_H

#include "jaus.h"

#ifndef   JAUS_10_PV 
#define  JAUS_10_PV_SHOOT_BIT    		0
#define  JAUS_10_PV_ECHOES_BIT                  1
#endif

typedef struct
{
	// Include all parameters from a JausMessage structure:
	// Header Properties
	struct
	{
		// Properties by bit fields
		#ifdef JAUS_BIG_ENDIAN
			JausUnsignedShort reserved:2;
			JausUnsignedShort version:6;
			JausUnsignedShort expFlag:1;
			JausUnsignedShort scFlag:1;
			JausUnsignedShort ackNak:2;
			JausUnsignedShort priority:4; 
		#elif JAUS_LITTLE_ENDIAN
			JausUnsignedShort priority:4; 
			JausUnsignedShort ackNak:2;
			JausUnsignedShort scFlag:1; 
			JausUnsignedShort expFlag:1;
			JausUnsignedShort version:6; 
			JausUnsignedShort reserved:2;
		#else
			#error "Please define system endianess (see jaus.h)"
		#endif
	}properties;

	JausUnsignedShort commandCode; 

	JausAddress destination;

	JausAddress source;

	JausUnsignedInteger dataSize;

	JausUnsignedInteger dataFlag;
	
	JausUnsignedShort sequenceNumber;

 // PRESENCE VECTOR
  JausByte presenceVector; 	
  
  // MESSAGE DATA MEMBERS GO HERE
	
  JausBoolean shoot; 
  JausDouble echoes[5];      	// Scaled Short (-32768,32768)x5, Res: 1


}TelemeterInfo10MessageStruct;

typedef TelemeterInfo10MessageStruct* TelemeterInfo10Message;

JAUS_EXPORT TelemeterInfo10Message telemeterInfo10MessageCreate(void);
JAUS_EXPORT void telemeterInfo10MessageDestroy(TelemeterInfo10Message);

JAUS_EXPORT JausBoolean telemeterInfo10MessageFromBuffer(TelemeterInfo10Message message, unsigned char* buffer, unsigned int bufferSizeBytes);
JAUS_EXPORT JausBoolean telemeterInfo10MessageToBuffer(TelemeterInfo10Message message, unsigned char *buffer, unsigned int bufferSizeBytes);

JAUS_EXPORT TelemeterInfo10Message telemeterInfo10MessageFromJausMessage(JausMessage jausMessage);
JAUS_EXPORT JausMessage telemeterInfo10MessageToJausMessage(TelemeterInfo10Message message);

JAUS_EXPORT unsigned int telemeterInfo10MessageSize(TelemeterInfo10Message message);

JAUS_EXPORT char* telemeterInfo10MessageToString(TelemeterInfo10Message message);
#endif // TELEMETER_INFO_10_MESSAGE_H
