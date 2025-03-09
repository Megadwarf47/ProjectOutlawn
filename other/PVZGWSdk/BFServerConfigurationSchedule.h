///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFServerConfigurationData.h>

namespace fb {
	struct BFServerConfigurationSchedule {
		BFServerConfigurationSchedule() {
		};

		Array<String> m_licenses; // 0x0 (0)
		Array<String> m_levels; // 0x8 (8)
		BFServerConfigurationData m_data; // 0x10 (16)
	}; // 0x18 (24)
}

