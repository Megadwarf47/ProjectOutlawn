///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class TriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TriggerEntityData"); }
		virtual ~TriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		TriggerEntityData() {
			m_delay = 0.f;
			m_runOnce = true;
			m_enabled = true;
		};

		float m_delay; // 0x60 (96)
		bool m_runOnce; // 0x64 (100)
		bool m_enabled; // 0x65 (101)
	}; // 0x70 (112)
}

