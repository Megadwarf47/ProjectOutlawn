///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlueprintBundleSettings.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct BlueprintBundleReference {
		BlueprintBundleReference() {
			m_baseBundleHash = 0;
		};

		String m_name; // 0x0 (0)
		BlueprintBundleSettings m_settings; // 0x8 (8)
		u32 m_baseBundleHash; // 0x14 (20)
	}; // 0x18 (24)
}

