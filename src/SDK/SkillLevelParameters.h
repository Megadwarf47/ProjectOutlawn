///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/SkillLevelComponent.h>

namespace fb {
	class SkillLevelParameters : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkillLevelParameters"); }
		virtual ~SkillLevelParameters() override {}
		SkillLevelParameters() {
			m_oldValueWeight = 0.9f;
			m_maxValue = 1000.f;
			m_minimumTimeRequired = 300.f;
		};

		SkillLevelComponent m_spm; // 0x18 (24)
		SkillLevelComponent m_kpm; // 0x20 (32)
		SkillLevelComponent m_kdr; // 0x28 (40)
		float m_oldValueWeight; // 0x30 (48)
		float m_maxValue; // 0x34 (52)
		float m_minimumTimeRequired; // 0x38 (56)
	}; // 0x40 (64)
}

