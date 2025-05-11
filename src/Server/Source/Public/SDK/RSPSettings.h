///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MapRotationConfig.h>
#include <fb/PresetTypeConfig.h>
#include <fb/SettingConfig.h>
#include <fb/SettingsRangeConfig.h>
#include <fb/SystemSettings.h>

namespace fb {
	class RSPSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RSPSettings"); }
		virtual ~RSPSettings() override {}
		RSPSettings() {
		};

		Array<SettingConfig> m_presetSettings; // 0x20 (32)
		Array<SettingsRangeConfig> m_settingsRanges; // 0x28 (40)
		Array<PresetTypeConfig> m_presetTypes; // 0x30 (48)
		Array<MapRotationConfig> m_mapRotations; // 0x38 (56)
	}; // 0x40 (64)
}

