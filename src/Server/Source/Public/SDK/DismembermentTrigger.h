///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	struct DismembermentTrigger {
		DismembermentTrigger() {
			m_triggerPercentage = 30.f;
			m_shieldActive = false;
			m_dismemberFaceProp = false;
			m_dismemberHeadProp = false;
			m_dismemberHead = false;
			m_dismemberBodyProp = false;
			m_dismemberHipsProp = false;
			m_dismemberLeftArm = false;
			m_dismemberLeftHandProp = false;
			m_dismemberRightArm = false;
			m_dismemberRightHandProp = false;
		};

		float m_triggerPercentage; // 0x0 (0)
		CtrRef<AntEnumeration> m_dismembermentLevel; // 0x8 (8)
		bool m_shieldActive; // 0x10 (16)
		bool m_dismemberFaceProp; // 0x11 (17)
		bool m_dismemberHeadProp; // 0x12 (18)
		bool m_dismemberHead; // 0x13 (19)
		bool m_dismemberBodyProp; // 0x14 (20)
		bool m_dismemberHipsProp; // 0x15 (21)
		bool m_dismemberLeftArm; // 0x16 (22)
		bool m_dismemberLeftHandProp; // 0x17 (23)
		bool m_dismemberRightArm; // 0x18 (24)
		bool m_dismemberRightHandProp; // 0x19 (25)
	}; // 0x20 (32)
}

