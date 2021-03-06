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
// File Name: jausNode.h
//
// Written By: Danny Kent (jaus AT dannykent DOT com)
//
// Version: 3.3.0b
//
// Date: 09/08/09
//
// Description: This file defines all the attributes of a JausNode

#ifndef JAUS_NODE_H
#define JAUS_NODE_H

#define NODE_TIMEOUT_SEC 5.0

/*******************************************************************************
        CITIUS: Identificadores de nodos presentes en la arquitectura
 *              - Node 'Control' (Todos) -> ID = 1
 *              - Node 'Camera' (USV) -> ID = 2
 *              - Node 'Tablet' (UGV) -> ID = 2
 *              - Node 'Communication management' (Todos) -> ID = 3
 *              - Node 'AOC Server' (USV) -> ID = 4
 * 
 ******************************************************************************/
#define JAUSNODE_ID_CONTROL 1
#define JAUSNODE_ID_CAMERA 2
#define JAUSNODE_ID_TABLET 2
#define JAUSNODE_ID_COMMUNICATION_MNG 3
#define JAUSNODE_ID_AOC_SERVER 4
/* ************************************************************************** */


#include <time.h>
#include "jaus.h"

typedef struct
{
	char *identification;
	JausByte id;
	JausSubsystem subsystem;
	JausArray components;
	
	time_t timeStampSec;
}JausNodeStruct;

typedef JausNodeStruct *JausNode;

JAUS_EXPORT JausNode jausNodeCreate(void);
JAUS_EXPORT void jausNodeDestroy(JausNode node);
JAUS_EXPORT JausNode jausNodeClone(JausNode node);
JAUS_EXPORT JausBoolean jausNodeHasIdentification(JausNode node);
JAUS_EXPORT JausBoolean jausNodeHasConfiguration(JausNode node);

JAUS_EXPORT JausBoolean jausNodeFreeMemory(JausNode node);
JAUS_EXPORT void jausNodeUpdateTimestamp(JausNode node);
JAUS_EXPORT JausBoolean jausNodeIsTimedOut(JausNode node);
JAUS_EXPORT int jausNodeToString(JausNode node, char *buf);

#endif //JAUS_NODE_H
