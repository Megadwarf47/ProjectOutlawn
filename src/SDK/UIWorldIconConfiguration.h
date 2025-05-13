///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/UIColorConfiguration.h>
#include <fb/UIGrenadeConfiguration.h>
#include <fb/UILockingConfiguration.h>
#include <fb/UIShieldIconConfiguration.h>
#include <fb/UIWorldZoneDistanceConfiguration.h>

namespace fb {
	class UIElementFontStyle;
	class UINametagConfiguration;
}

namespace fb {
	struct UIWorldIconConfiguration {
		UIWorldIconConfiguration() {
			m_requestIconBlinkRate = 0.25f;
		};

		UILockingConfiguration m_lockingCfg; // 0x0 (0)
		UIColorConfiguration m_stdColors; // 0x90 (144)
		CtrRef<UINametagConfiguration> m_nametagCfg; // 0x190 (400)
		CtrRef<UINametagConfiguration> m_spNametagCfg; // 0x198 (408)
		CtrRef<UINametagConfiguration> m_hardcoreNametagCfg; // 0x1A0 (416)
		UIShieldIconConfiguration m_shieldIconCfg; // 0x1A8 (424)
		Array<UIColorConfiguration> m_colorBlindModes; // 0x1C8 (456)
		UIWorldZoneDistanceConfiguration m_zoneDistanceCfg; // 0x1D0 (464)
		float m_requestIconBlinkRate; // 0x1D8 (472)
		UIGrenadeConfiguration m_grenadeCfg; // 0x1DC (476)
		CtrRef<UIElementFontStyle> m_mapFont; // 0x210 (528)
		CtrRef<UIElementFontStyle> m_hudFont; // 0x218 (536)
	}; // 0x220 (544)
}

