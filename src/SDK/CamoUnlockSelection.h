///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	struct CamoUnlockSelection {
		CamoUnlockSelection() {
			m_category = 0;
		};

		s32 m_category; // 0x0 (0)
		CtrRef<UnlockAssetBase> m_asset; // 0x8 (8)
	}; // 0x10 (16)
}

