#ifndef _PTUCOORDINATIONSERVICEPTUPOSESENDHANDLER_HH_
#define _PTUCOORDINATIONSERVICEPTUPOSESENDHANDLER_HH_

#include "DomainPTU/CommPTUMoveRequest.hh"
#include <string>

class PTUCoordinationServicePtuposeSendHandler
{
public:

	PTUCoordinationServicePtuposeSendHandler(){

	}

	DomainPTU::CommPTUMoveRequest handleSend(std::string inString);
};

#endif
