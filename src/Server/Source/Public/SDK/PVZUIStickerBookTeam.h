///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIDisplayStat.h>
#include <fb/PVZUIStickerBookCommanderAbility.h>
#include <fb/PVZUIStickerBookSummonGroup.h>

namespace fb {
	struct PVZUIStickerBookTeam {
		PVZUIStickerBookTeam() {
		};

		Array<PVZUIDisplayStat> m_teamStats; // 0x0 (0)
		Array<PVZUIStickerBookSummonGroup> m_summons; // 0x8 (8)
		Array<PVZUIStickerBookCommanderAbility> m_commanderAbilities; // 0x10 (16)
	}; // 0x18 (24)
}

