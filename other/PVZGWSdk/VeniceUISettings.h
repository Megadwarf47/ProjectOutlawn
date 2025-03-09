///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class VeniceUISettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceUISettings"); }
		virtual ~VeniceUISettings() override {}
		VeniceUISettings() {
			m_getStatsInOnlineFlow = true;
			m_isDemoMode = false;
		};

		String m_metaDataAssetPath; // 0x20 (32)
		String m_imSettingsAssetPath; // 0x28 (40)
		String m_loadingTransitionTexturePath; // 0x30 (48)
		String m_savingTransitionTexturePath; // 0x38 (56)
		String m_serverBannerTexturePath; // 0x40 (64)
		String m_gradientTexturePath; // 0x48 (72)
		String m_platformOverride; // 0x50 (80)
		bool m_getStatsInOnlineFlow; // 0x58 (88)
		bool m_isDemoMode; // 0x59 (89)
	}; // 0x60 (96)
}

