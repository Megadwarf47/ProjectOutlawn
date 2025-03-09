///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntSpeedLevel.h>
#include <fb/Types.h>

namespace fb {
	struct LookAtHuman {
		LookAtHuman() {
			m_speedLevel = AntSpeedLevel::AntSpeedLevel_Still;
			m_delayMin = 5.f;
			m_delayMax = 10.f;
			m_lengthMin = 5.f;
			m_lengthMax = 10.f;
		};

		AntSpeedLevel m_speedLevel; // 0x0 (0)
		float m_delayMin; // 0x4 (4)
		float m_delayMax; // 0x8 (8)
		float m_lengthMin; // 0xC (12)
		float m_lengthMax; // 0x10 (16)
	}; // 0x14 (20)
}

