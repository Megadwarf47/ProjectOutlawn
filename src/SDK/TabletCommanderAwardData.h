///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwardGroup.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct TabletCommanderAwardData {
		TabletCommanderAwardData() {
			m_score = 0.f;
			m_timesTakenCount = 0;
			m_group = AwardGroup::AwardGroup_Undefined;
		};

		String m_awardCode; // 0x0 (0)
		String m_name; // 0x8 (8)
		String m_description; // 0x10 (16)
		String m_imageName; // 0x18 (24)
		float m_score; // 0x20 (32)
		u32 m_timesTakenCount; // 0x24 (36)
		AwardGroup m_group; // 0x28 (40)
	}; // 0x30 (48)
}

