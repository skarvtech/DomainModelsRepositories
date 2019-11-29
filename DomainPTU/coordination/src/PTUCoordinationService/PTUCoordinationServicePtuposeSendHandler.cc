#include "PTUCoordinationServicePtuposeSendHandler.hh"

#ifndef LISP_SEPARATOR
#define LISP_SEPARATOR " ()\"\n"
#define LISP_STRING 100000
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
DomainPTU::CommPTUMoveRequest PTUCoordinationServicePtuposeSendHandler::handleSend(std::string inString){

	// TODO: Check if correct

	DomainPTU::CommPTUMoveRequest sendCommObject;

	char *running;
	char *token;
	double angle, x, y, z;

	// copy string
	token = running = strdupa (inString.c_str());

	// extract string:  absolute / relative
	do
	{
		token = strsep (&running, LISP_SEPARATOR);
	} while ((token != NULL) && (strlen(token)==0));

	if( strcasecmp(token, "absolute") == 0 )
	{
		sendCommObject.set_move_mode(DomainPTU::PTUMoveFlag::PAN_TILT_ABSOLUTE);
		// set pan
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		angle = atof(token);
		sendCommObject.set_pan(angle);
		// set tilt
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		angle = atof(token);
		sendCommObject.set_tilt(angle);
	}
	else if( strcasecmp(token, "relative") == 0 )
	{
		sendCommObject.set_move_mode(DomainPTU::PTUMoveFlag::PAN_TILT_RELATIVE);
		// set pan
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		angle = atof(token);
		sendCommObject.set_pan(angle);
		// set tilt
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		angle = atof(token);
		sendCommObject.set_tilt(angle);
	}
	else if( strcasecmp(token, "positionrobot") == 0 )
	{
		sendCommObject.set_move_mode(DomainPTU::PTUMoveFlag::POSITION_ROBOT);
		// set x
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		x = atof(token);
		// set y
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		y = atof(token);
		// set z
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		z = atof(token);
		sendCommObject.set_position(x, y, z);
	}
	else if( strcasecmp(token, "positionworld") == 0 )
	{
		sendCommObject.set_move_mode(DomainPTU::PTUMoveFlag::POSITION_WORLD);
		// set x
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		x = atof(token);
		// set y
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		y = atof(token);
		// set z
		do
		{
			token = strsep (&running, LISP_SEPARATOR);
		} while ((token != NULL) && (strlen(token)==0));
		z = atof(token);
		sendCommObject.set_position(x, y, z);
	}
	else
	{
		std::cout << "unknown PTUMoveFlag\n";
	}

	return sendCommObject;
}

