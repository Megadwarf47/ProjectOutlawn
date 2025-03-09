///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntAnimatableData.h>
#include <fb/AntControllerComplexity.h>
#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/LodBinding.h>
#include <fb/Types.h>

namespace fb {
	struct AntAnimationHandlerData {
		AntAnimationHandlerData() {
			m_controllerComplexity = AntControllerComplexity::AntControllerComplexity_High;
			m_reportBackFromAnt = true;
			m_enableMasterSlaveCopy = true;
			m_isProp = true;
		};

		AntAnimatableData m_animatable; // 0x0 (0)
		AntRef m_rootController; // 0x60 (96)
		LodBinding m_lodBinding; // 0x74 (116)
		Array<s32> m_jointOutputFieldHashes; // 0xD8 (216)
		Array<s32> m_jointEnabledFieldHashes; // 0xE0 (224)
		AntControllerComplexity m_controllerComplexity; // 0xE8 (232)
		bool m_reportBackFromAnt; // 0xEC (236)
		bool m_enableMasterSlaveCopy; // 0xED (237)
		bool m_isProp; // 0xEE (238)
	}; // 0xF0 (240)
}

