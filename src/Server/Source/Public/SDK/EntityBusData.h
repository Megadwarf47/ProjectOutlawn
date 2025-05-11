///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataBusData.h>
#include <fb/EventConnection.h>

namespace fb {
	class EntityBusData : public DataBusData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityBusData"); }
		virtual ~EntityBusData() override {}
		EntityBusData() {
		};

		Array<EventConnection> m_eventConnections; // 0x38 (56)
	}; // 0x40 (64)
}

