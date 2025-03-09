///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIAirRadarConfiguration.h>
#include <fb/UIChatConfiguration.h>
#include <fb/UIDeployConfiguration.h>
#include <fb/UIIMSettingsAsset.h>
#include <fb/UIMinimapIconConfiguration.h>
#include <fb/UIWorldIconConfiguration.h>

namespace fb {
	class UIButtonsTextureAtlasAsset;
	class UIMinimapIconTextureAtlasAsset;
}

namespace fb {
	class BFUIIMSettingsAsset : public UIIMSettingsAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIIMSettingsAsset"); }
		virtual ~BFUIIMSettingsAsset() override {}
		BFUIIMSettingsAsset() {
		};

		UIWorldIconConfiguration m_worldIconCfg; // 0x30 (48)
		UIMinimapIconConfiguration m_mapIconCfg; // 0x250 (592)
		CtrRef<UIMinimapIconTextureAtlasAsset> m_iconAtlas; // 0x280 (640)
		CtrRef<UIButtonsTextureAtlasAsset> m_buttonsTextureAtlas; // 0x288 (648)
		UIDeployConfiguration m_deployCfg; // 0x290 (656)
		UIChatConfiguration m_chatConfig; // 0x298 (664)
		UIAirRadarConfiguration m_airRadarConfig; // 0x2A0 (672)
	}; // 0x2B0 (688)
}

