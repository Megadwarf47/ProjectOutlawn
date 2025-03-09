///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class EventIfSwitchEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventIfSwitchEntityData"); }
		virtual ~EventIfSwitchEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		EventIfSwitchEntityData() {
			m_startState = false;
			m_runOnce = false;
		};

		bool m_startState; // 0x18 (24)
		bool m_runOnce; // 0x19 (25)
	}; // 0x20 (32)
}

