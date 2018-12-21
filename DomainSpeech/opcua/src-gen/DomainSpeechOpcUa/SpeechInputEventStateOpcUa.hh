//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#include "DomainSpeech/SpeechInputEventState.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for SpeechInputEventState
template <>
ComplexType::shp_t SelfDescription(DomainSpeech::SpeechInputEventState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add topic
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementString(
				"topic",
				std::bind(&DomainSpeech::SpeechInputEventState::getTopic, obj),
				std::bind(&DomainSpeech::SpeechInputEventState::setTopic, obj, std::placeholders::_1)
			)
		)
	);
	// add text
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementString(
				"text",
				std::bind(&DomainSpeech::SpeechInputEventState::getText, obj),
				std::bind(&DomainSpeech::SpeechInputEventState::setText, obj, std::placeholders::_1)
			)
		)
	);
	// add semantic
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementString(
				"semantic",
				std::bind(&DomainSpeech::SpeechInputEventState::getSemantic, obj),
				std::bind(&DomainSpeech::SpeechInputEventState::setSemantic, obj, std::placeholders::_1)
			)
		)
	);
	// add confidence
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"confidence",
				std::bind(&DomainSpeech::SpeechInputEventState::getConfidence, obj),
				std::bind(&DomainSpeech::SpeechInputEventState::setConfidence, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet