///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEntityData.h>

namespace fb {
	class CombatActionTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CombatActionTriggerEntityData"); }
		virtual ~CombatActionTriggerEntityData() override {}
		CombatActionTriggerEntityData() {
			m_timeToTriggerOnNoAction = 5.f;
		};

		float m_timeToTriggerOnNoAction; // 0x70 (112)
	}; // 0x80 (128)
}

