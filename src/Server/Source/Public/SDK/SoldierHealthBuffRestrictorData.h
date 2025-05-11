///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffRestrictorData.h>
#include <fb/StateRestriction.h>

namespace fb {
	class SoldierHealthBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierHealthBuffRestrictorData"); }
		virtual ~SoldierHealthBuffRestrictorData() override {}
		SoldierHealthBuffRestrictorData() {
			m_immortalRestriction = StateRestriction::StateRestriction_None;
			m_spawningRestriction = StateRestriction::StateRestriction_None;
			m_aliveRestriction = StateRestriction::StateRestriction_None;
			m_deadRestriction = StateRestriction::StateRestriction_None;
			m_dyingRestriction = StateRestriction::StateRestriction_None;
			m_manDownRestriction = StateRestriction::StateRestriction_None;
			m_healingOverTimeRestriction = StateRestriction::StateRestriction_None;
		};

		StateRestriction m_immortalRestriction; // 0x10 (16)
		StateRestriction m_spawningRestriction; // 0x14 (20)
		StateRestriction m_aliveRestriction; // 0x18 (24)
		StateRestriction m_deadRestriction; // 0x1C (28)
		StateRestriction m_dyingRestriction; // 0x20 (32)
		StateRestriction m_manDownRestriction; // 0x24 (36)
		StateRestriction m_healingOverTimeRestriction; // 0x28 (40)
	}; // 0x30 (48)
}

