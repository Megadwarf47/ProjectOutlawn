///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PlatformScalableFloat.h>
#include <fb/UI3dIconCompData.h>
#include <fb/Vec4.h>

namespace fb {
	class PVZUINametagCompData : public UI3dIconCompData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUINametagCompData"); }
		virtual ~PVZUINametagCompData() override {}
		PVZUINametagCompData() {
			m_friendlyTint = Vec4(0.f, 0.8f, 0.8f, 1.f);
			m_squadTint = Vec4(0.454902f, 0.862745f, 0.8f, 1.f);
			m_enemyTint = Vec4(1.f, 0.376471f, 0.f, 1.f);
			m_partyMemberTint = Vec4(0.333333f, 0.419608f, 0.184314f, 1.f);
			m_tooltipCooldown = 5;
			m_orderCooldown = 20;
			m_healthBarSize = 78.f;
			m_nameFontSize = 12.f;
			m_partyMemberNameOffsetX = 5.f;
			m_partyMemberNameOffsetY = 5.f;
			m_nameGlowSize = 8.f;
			m_reviveIconVisibilityRange = 25.f;
			m_injuredIconVisibilityRange = 25.f;
			m_healerIconVisibilityRange = 25.f;
			m_healthBarVisibilityThreshold = 1.f;
			m_nameTagStartPosOffset = -20.f;
			m_nameTagHealthBarOffset = -20.f;
			m_nameTagPlayerIconOffset = -30.f;
			m_injuredIconPosOffset = 0.f;
			m_injuredIconHorizontalPosOffset = 10.f;
			m_playerIconPosOffset = -5.f;
			m_playerIconHorizontalPosOffset = 10.f;
			m_healthBarComponentStartPosOffset = 10.f;
			m_healthBarComponentCoopStartPosOffset = 10.f;
			m_healIconInjuredThreshold = 0.75f;
			m_healIconCriticalThreshold = 0.25f;
			m_crosshairFOV = 4.f;
			m_nametagFontSize = PlatformScalableFloat(24.f, 12.f, 12.f, 24.f, 24.f);
			m_nametagGlowSize = PlatformScalableFloat(18.f, 8.f, 8.f, 18.f, 18.f);
			m_partyMemberNameFontSize = PlatformScalableFloat(30.f, 20.f, 20.f, 30.f, 30.f);
			m_ignoreOcclusionForTeammateEnemySpotting = true;
		};

		Vec4 m_friendlyTint; // 0xC0 (192)
		Vec4 m_squadTint; // 0xD0 (208)
		Vec4 m_enemyTint; // 0xE0 (224)
		Vec4 m_partyMemberTint; // 0xF0 (240)
		s32 m_tooltipCooldown; // 0x100 (256)
		s32 m_orderCooldown; // 0x104 (260)
		float m_healthBarSize; // 0x108 (264)
		float m_nameFontSize; // 0x10C (268)
		float m_partyMemberNameOffsetX; // 0x110 (272)
		float m_partyMemberNameOffsetY; // 0x114 (276)
		float m_nameGlowSize; // 0x118 (280)
		float m_reviveIconVisibilityRange; // 0x11C (284)
		float m_injuredIconVisibilityRange; // 0x120 (288)
		float m_healerIconVisibilityRange; // 0x124 (292)
		float m_healthBarVisibilityThreshold; // 0x128 (296)
		float m_nameTagStartPosOffset; // 0x12C (300)
		float m_nameTagHealthBarOffset; // 0x130 (304)
		float m_nameTagPlayerIconOffset; // 0x134 (308)
		float m_injuredIconPosOffset; // 0x138 (312)
		float m_injuredIconHorizontalPosOffset; // 0x13C (316)
		float m_playerIconPosOffset; // 0x140 (320)
		float m_playerIconHorizontalPosOffset; // 0x144 (324)
		float m_healthBarComponentStartPosOffset; // 0x148 (328)
		float m_healthBarComponentCoopStartPosOffset; // 0x14C (332)
		float m_healIconInjuredThreshold; // 0x150 (336)
		float m_healIconCriticalThreshold; // 0x154 (340)
		float m_crosshairFOV; // 0x158 (344)
		PlatformScalableFloat m_nametagFontSize; // 0x15C (348)
		PlatformScalableFloat m_nametagGlowSize; // 0x170 (368)
		PlatformScalableFloat m_partyMemberNameFontSize; // 0x184 (388)
		bool m_ignoreOcclusionForTeammateEnemySpotting; // 0x198 (408)
	}; // 0x1A0 (416)
}

