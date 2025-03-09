///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct RecoilData {
		RecoilData() {
			m_maxRecoilAngleX = 0.f;
			m_minRecoilAngleX = 0.f;
			m_maxRecoilAngleY = 0.f;
			m_minRecoilAngleY = 0.f;
			m_maxRecoilAngleZ = 0.f;
			m_minRecoilAngleZ = 0.f;
			m_maxRecoilFov = 0.f;
			m_minRecoilFov = 0.f;
			m_recoilRecoveryTime = 0.01f;
			m_recoilFollowsDispersion = true;
		};

		float m_maxRecoilAngleX; // 0x0 (0)
		float m_minRecoilAngleX; // 0x4 (4)
		float m_maxRecoilAngleY; // 0x8 (8)
		float m_minRecoilAngleY; // 0xC (12)
		float m_maxRecoilAngleZ; // 0x10 (16)
		float m_minRecoilAngleZ; // 0x14 (20)
		float m_maxRecoilFov; // 0x18 (24)
		float m_minRecoilFov; // 0x1C (28)
		float m_recoilRecoveryTime; // 0x20 (32)
		bool m_recoilFollowsDispersion; // 0x24 (36)
	}; // 0x28 (40)
}

