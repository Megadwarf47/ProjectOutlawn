///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoDefensiveState : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoDefensiveState"); }
		virtual ~BT_DoDefensiveState() override {}
		BT_DoDefensiveState() {
			m_damageMultiplier = 0.f;
			m_allowAttack = false;
			m_allowTargetting = true;
			m_triggerAnimation = true;
		};

		float m_damageMultiplier; // 0x18 (24)
		bool m_allowAttack; // 0x1C (28)
		bool m_allowTargetting; // 0x1D (29)
		bool m_triggerAnimation; // 0x1E (30)
	}; // 0x20 (32)
}

