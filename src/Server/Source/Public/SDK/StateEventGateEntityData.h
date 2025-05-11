///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/EventGateState.h>

namespace fb {
	class StateEventGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StateEventGateEntityData"); }
		virtual ~StateEventGateEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		StateEventGateEntityData() {
			m_checkedState = EventGateState::EGSInvalid;
		};

		EventGateState m_checkedState; // 0x18 (24)
	}; // 0x20 (32)
}

