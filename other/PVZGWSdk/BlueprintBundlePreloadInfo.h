///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct BlueprintBundlePreloadInfo {
		BlueprintBundlePreloadInfo() {
			m_compartment = 0;
			m_parentCompartment = 0;
		};

		String m_name; // 0x0 (0)
		s32 m_compartment; // 0x8 (8)
		s32 m_parentCompartment; // 0xC (12)
	}; // 0x10 (16)
}

