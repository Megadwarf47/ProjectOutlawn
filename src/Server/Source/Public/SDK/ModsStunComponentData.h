///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsInputRestrictionComponentData.h>

namespace fb {
	class ModsStunComponentData : public ModsInputRestrictionComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsStunComponentData"); }
		virtual ~ModsStunComponentData() override {}
		ModsStunComponentData() {
			m_animationExitTime = 2.f;
			m_useAnimationExitTime = false;
			m_targetIsPushable = false;
			m_targetIsInverted = false;
		};

		float m_animationExitTime; // 0xE0 (224)
		bool m_useAnimationExitTime; // 0xE4 (228)
		bool m_targetIsPushable; // 0xE5 (229)
		bool m_targetIsInverted; // 0xE6 (230)
	}; // 0xF0 (240)
}

