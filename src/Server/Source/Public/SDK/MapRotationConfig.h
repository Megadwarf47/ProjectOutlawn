///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GamePlatform.h>
#include <fb/MapRotationEntry.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct MapRotationConfig {
		MapRotationConfig() {
			m_mapRotationId = 0;
		};

		s32 m_mapRotationId; // 0x0 (0)
		Array<GamePlatform> m_platforms; // 0x8 (8)
		String m_nameSid; // 0x10 (16)
		String m_descSid; // 0x18 (24)
		String m_mod; // 0x20 (32)
		String m_key; // 0x28 (40)
		Array<MapRotationEntry> m_mapRotation; // 0x30 (48)
	}; // 0x38 (56)
}

