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
	struct HostMigrationSnapshot {
		HostMigrationSnapshot() {
			m_gardenDamage = 0.f;
			m_garden = 0;
			m_gardensDefended = 0;
		};

		String m_wave; // 0x0 (0)
		float m_gardenDamage; // 0x8 (8)
		u8 m_garden; // 0xC (12)
		u8 m_gardensDefended; // 0xD (13)
	}; // 0x10 (16)
}

