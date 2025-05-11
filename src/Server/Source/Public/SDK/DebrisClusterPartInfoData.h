///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct DebrisClusterPartInfoData {
		DebrisClusterPartInfoData() {
			m_partIndex = 0;
			m_numberOfChildren = 0;
			m_splitSpeedThreshold = 0.f;
			m_syncRestPosition = false;
			m_syncContinous = false;
			m_inEffectWorldOnly = false;
		};

		Vec3 m_linearVelocity; // 0x0 (0)
		Vec3 m_angularVelocity; // 0x10 (16)
		s32 m_partIndex; // 0x20 (32)
		s32 m_numberOfChildren; // 0x24 (36)
		float m_splitSpeedThreshold; // 0x28 (40)
		bool m_syncRestPosition; // 0x2C (44)
		bool m_syncContinous; // 0x2D (45)
		bool m_inEffectWorldOnly; // 0x2E (46)
	}; // 0x30 (48)
}

