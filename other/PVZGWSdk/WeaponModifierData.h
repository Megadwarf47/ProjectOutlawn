///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/Types.h>

namespace fb {
	class WeaponModifierBase;
}

namespace fb {
	struct WeaponModifierData {
		WeaponModifierData() {
		};

		Guid m_unlockAssetGuid; // 0x0 (0)
		RefArray<WeaponModifierBase> m_modifiers; // 0x10 (16)
	}; // 0x18 (24)
}

