///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIDisplayStat.h>
#include <fb/PVZUIStickerBookAccessoryCategory.h>
#include <fb/PVZUIStickerBookCostume.h>
#include <fb/PVZUIStickerBookUnlockGroup.h>
#include <fb/String.h>

namespace fb {
	struct PVZUIStickerBookClass {
		PVZUIStickerBookClass() {
		};

		String m_header; // 0x0 (0)
		String m_label; // 0x8 (8)
		Array<PVZUIStickerBookUnlockGroup> m_abilities; // 0x10 (16)
		String m_abilitiesDescription; // 0x18 (24)
		Array<PVZUIDisplayStat> m_stats; // 0x20 (32)
		Array<PVZUIDisplayStat> m_costumeOverallStats; // 0x28 (40)
		Array<PVZUIStickerBookCostume> m_costumes; // 0x30 (48)
		Array<PVZUIStickerBookAccessoryCategory> m_accessoryCategories; // 0x38 (56)
	}; // 0x40 (64)
}

