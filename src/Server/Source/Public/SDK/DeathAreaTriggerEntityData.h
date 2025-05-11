///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEntityData.h>

namespace fb {
	class DeathAreaTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeathAreaTriggerEntityData"); }
		virtual ~DeathAreaTriggerEntityData() override {}
		DeathAreaTriggerEntityData() {
			m_damage = 50.f;
			m_timeToReturn = 2.f;
		};

		float m_damage; // 0x70 (112)
		float m_timeToReturn; // 0x74 (116)
	}; // 0x80 (128)
}

