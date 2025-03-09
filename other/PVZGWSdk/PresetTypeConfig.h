///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LockedSettingConfig.h>
#include <fb/RSPPlatformSetting.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct PresetTypeConfig {
		PresetTypeConfig() {
			m_presetId = 0;
		};

		s32 m_presetId; // 0x0 (0)
		String m_key; // 0x8 (8)
		String m_nameSid; // 0x10 (16)
		String m_descSid; // 0x18 (24)
		String m_serverType; // 0x20 (32)
		Array<LockedSettingConfig> m_lockedSettings; // 0x28 (40)
		Array<RSPPlatformSetting> m_platformSettings; // 0x30 (48)
	}; // 0x38 (56)
}

