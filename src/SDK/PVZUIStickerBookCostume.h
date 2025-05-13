///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIDisplayStat.h>
#include <fb/PVZUIStickerBookUnlockGroup.h>
#include <fb/PVZUIStickerBookWeapon.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct PVZUIStickerBookCostume {
		PVZUIStickerBookCostume() {
			m_isBaseCostume = false;
			m_hideIfLocked = false;
		};

		String m_label; // 0x0 (0)
		String m_description; // 0x8 (8)
		Array<PVZUIStickerBookUnlockGroup> m_progressParts; // 0x10 (16)
		PVZUIStickerBookWeapon m_weapon; // 0x18 (24)
		Array<PVZUIStickerBookUnlockGroup> m_weaponUpgrades; // 0x48 (72)
		Array<PVZUIStickerBookUnlockGroup> m_weaponSkins; // 0x50 (80)
		Array<PVZUIDisplayStat> m_stats; // 0x58 (88)
		bool m_isBaseCostume; // 0x60 (96)
		bool m_hideIfLocked; // 0x61 (97)
	}; // 0x68 (104)
}

