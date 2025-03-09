///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZUIDisplayStatType.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct PVZUIDisplayStat {
		PVZUIDisplayStat() {
			m_statType = PVZUIDisplayStatType::PVZUIDisplayStatType_Number;
			m_statMultiplier = 1.f;
			m_statIndex = 0;
			m_divideByStatMultiplier = 1.f;
			m_divideByStatIndex = 0;
		};

		String m_label; // 0x0 (0)
		String m_format; // 0x8 (8)
		PVZUIDisplayStatType m_statType; // 0x10 (16)
		float m_statMultiplier; // 0x14 (20)
		String m_statName; // 0x18 (24)
		u32 m_statIndex; // 0x20 (32)
		float m_divideByStatMultiplier; // 0x24 (36)
		String m_divideByStatName; // 0x28 (40)
		u32 m_divideByStatIndex; // 0x30 (48)
	}; // 0x38 (56)
}

