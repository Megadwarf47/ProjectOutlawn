///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NucleusEnvironment.h>
#include <fb/String.h>

namespace fb {
	struct NucleusEnvironmentConfiguration {
		NucleusEnvironmentConfiguration() {
			m_env = NucleusEnvironment::NucleusEnv_1Box;
		};

		NucleusEnvironment m_env; // 0x0 (0)
		String m_baseUrl; // 0x8 (8)
		String m_nucleusClientId; // 0x10 (16)
	}; // 0x18 (24)
}

