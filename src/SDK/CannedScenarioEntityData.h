///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CannedAnimationBinding.h>
#include <fb/EntityData.h>

namespace fb {
	class CannedScenarioEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CannedScenarioEntityData"); }
		virtual ~CannedScenarioEntityData() override {}
		CannedScenarioEntityData() {
			m_animationEntitySpacePriority = 3;
			m_alwaysClearEntitySpaceWhenInScenario = false;
		};

		CannedAnimationBinding m_cannedAnimBinding; // 0x18 (24)
		s32 m_animationEntitySpacePriority; // 0xF4 (244)
		bool m_alwaysClearEntitySpaceWhenInScenario; // 0xF8 (248)
	}; // 0x100 (256)
}

