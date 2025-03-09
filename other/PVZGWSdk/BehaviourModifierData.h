///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class BehaviourModifierData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BehaviourModifierData"); }
		virtual ~BehaviourModifierData() override {}
		BehaviourModifierData() {
			m_highAttackUsage = 1.f;
			m_fastLocomotionUsage = 1.f;
			m_dodgeUsage = 1.f;
			m_useHighAttackAreas = false;
		};

		float m_highAttackUsage; // 0x18 (24)
		float m_fastLocomotionUsage; // 0x1C (28)
		float m_dodgeUsage; // 0x20 (32)
		bool m_useHighAttackAreas; // 0x24 (36)
	}; // 0x28 (40)
}

