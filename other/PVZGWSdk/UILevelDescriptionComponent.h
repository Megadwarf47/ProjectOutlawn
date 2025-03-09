///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LevelDescriptionComponent.h>
#include <fb/PlatformScalableFloat.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/UIGPSPosition.h>
#include <fb/UILevelStatData.h>
#include <fb/UIMapNavigationData.h>
#include <fb/UIMinimapData.h>

namespace fb {
	class GameTipAsset;
	class UICreditsAsset;
	class UILevelLoadData;
}

namespace fb {
	class UILevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UILevelDescriptionComponent"); }
		virtual ~UILevelDescriptionComponent() override {}
		UILevelDescriptionComponent() {
			m_sortIndex = -1;
			m_loadScreenTeardownDelay = PlatformScalableFloat(5.f, 10.f, 10.f, 5.f, 5.f);
			m_isPlaygroundLevel = false;
			m_loadingMusicAutomaticStop = true;
			m_holdOnLoadComplete = false;
		};

		String m_loadingMusicPath; // 0x10 (16)
		String m_levelImagePath; // 0x18 (24)
		CtrRef<GameTipAsset> m_hintAsset; // 0x20 (32)
		RefArray<UICreditsAsset> m_creditsAssets; // 0x28 (40)
		UIMinimapData m_minimapData; // 0x30 (48)
		UIMapNavigationData m_mapNavigationData; // 0x38 (56)
		UILevelStatData m_levelCompledStatData; // 0x50 (80)
		UILevelStatData m_levelScoreStatData; // 0x70 (112)
		s32 m_sortIndex; // 0x90 (144)
		UIGPSPosition m_gpsPosition; // 0x98 (152)
		CtrRef<UILevelLoadData> m_levelLoadData; // 0xB0 (176)
		Array<String> m_levelAwardCodes; // 0xB8 (184)
		Array<u32> m_levelConsumableUnlocksIds; // 0xC0 (192)
		String m_mpLoadingAssetPath; // 0xC8 (200)
		PlatformScalableFloat m_loadScreenTeardownDelay; // 0xD0 (208)
		bool m_isPlaygroundLevel; // 0xE4 (228)
		bool m_loadingMusicAutomaticStop; // 0xE5 (229)
		bool m_holdOnLoadComplete; // 0xE6 (230)
	}; // 0xE8 (232)
}

