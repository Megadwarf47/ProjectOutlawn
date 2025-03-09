///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIStickerBookUnlockGroup.h>
#include <fb/String.h>

namespace fb {
	struct PVZUIStickerBookAccessoryCategory {
		PVZUIStickerBookAccessoryCategory() {
		};

		String m_label; // 0x0 (0)
		String m_description; // 0x8 (8)
		Array<PVZUIStickerBookUnlockGroup> m_accessories; // 0x10 (16)
	}; // 0x18 (24)
}

