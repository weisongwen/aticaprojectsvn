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
// File Name: reportDayTimeCamera22Message.h
//
// Written By: Danny Kent (jaus AT dannykent DOT com), Tom Galluzzo 
//
// Version: 3.3.0b
//
// Date: 09/08/09
//
// Description: This file defines the attributes of a ReportDayTimeCamera22Message

#ifndef REPORT_DAY_TIME_CAMERA_22_MESSAGE_H
#define REPORT_DAY_TIME_CAMERA_22_MESSAGE_H

#include "jaus.h"

#ifndef   JAUS_22_PV 
#define  JAUS_22_PV_ZOOM_BIT            0
#define  JAUS_22_PV_FOCUS_BIT           1
#define  JAUS_22_PV_AUTOFOCUS_BIT       2
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

	// MESSAGE DATA MEMBERS GO HERE
    // PRESENCE VECTOR
    JausByte presenceVector;
    
  JausDouble active_zoom;				// Scaled Short (0,100), Res:0.001 
  JausDouble active_focus;				// Scaled Short (0,100), Res:0.001 
  JausBoolean active_autofocus;	
	
}ReportDayTimeCamera22MessageStruct;

typedef ReportDayTimeCamera22MessageStruct* ReportDayTimeCamera22Message;

JAUS_EXPORT ReportDayTimeCamera22Message reportDayTimeCamera22MessageCreate(void);
JAUS_EXPORT void reportDayTimeCamera22MessageDestroy(ReportDayTimeCamera22Message);

JAUS_EXPORT JausBoolean reportDayTimeCamera22MessageFromBuffer(ReportDayTimeCamera22Message message, unsigned char* buffer, unsigned int bufferSizeBytes);
JAUS_EXPORT JausBoolean reportDayTimeCamera22MessageToBuffer(ReportDayTimeCamera22Message message, unsigned char *buffer, unsigned int bufferSizeBytes);

JAUS_EXPORT ReportDayTimeCamera22Message reportDayTimeCamera22MessageFromJausMessage(JausMessage jausMessage);
JAUS_EXPORT JausMessage reportDayTimeCamera22MessageToJausMessage(ReportDayTimeCamera22Message message);

JAUS_EXPORT unsigned int reportDayTimeCamera22MessageSize(ReportDayTimeCamera22Message message);

JAUS_EXPORT char* reportDayTimeCamera22MessageToString(ReportDayTimeCamera22Message message);
#endif // REPORT_DAY_TIME_CAMERA_22_MESSAGE_H
