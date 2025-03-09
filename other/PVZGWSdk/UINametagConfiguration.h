///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/UINametagBehavior.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UINametagConfiguration : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINametagConfiguration"); }
		virtual ~UINametagConfiguration() override {}
		UINametagConfiguration() {
			m_verticalSoldierOffset = 0.f;
			m_verticalNameOffset = -40;
			m_verticalDistanceOffset = -20;
			m_healthBarWidth = 74.f;
			m_healthBarVerticalOffset = -20;
			m_healthBarBgOpacity = 0.25f;
			m_healthBarBgLineWidth = 8;
			m_healthBarLineWidth = 6;
			m_lookAtObjectRadiusMultiplier = 0.8f;
			m_minObjectLookAtRadius = 25.f;
			m_hudElementLookAtRadius = 30.f;
			m_spottedBlinkRate = 0.2f;
			m_spottedMinAlpha = 0.3f;
			m_iconSpacingMultiplier = 1.f;
			m_activeBlinkRate = 0.1f;
			m_fadeInTime = 0.2f;
			m_fadeOutTime = 0.2f;
			m_potentialTargetOpacity = 0.5f;
		};

		float m_verticalSoldierOffset; // 0x18 (24)
		CtrRef<UIElementFontStyle> m_nameFont; // 0x20 (32)
		s32 m_verticalNameOffset; // 0x28 (40)
		CtrRef<UIElementFontStyle> m_distanceFont; // 0x30 (48)
		s32 m_verticalDistanceOffset; // 0x38 (56)
		float m_healthBarWidth; // 0x3C (60)
		s32 m_healthBarVerticalOffset; // 0x40 (64)
		float m_healthBarBgOpacity; // 0x44 (68)
		u32 m_healthBarBgLineWidth; // 0x48 (72)
		u32 m_healthBarLineWidth; // 0x4C (76)
		float m_lookAtObjectRadiusMultiplier; // 0x50 (80)
		float m_minObjectLookAtRadius; // 0x54 (84)
		float m_hudElementLookAtRadius; // 0x58 (88)
		float m_spottedBlinkRate; // 0x5C (92)
		float m_spottedMinAlpha; // 0x60 (96)
		float m_iconSpacingMultiplier; // 0x64 (100)
		UINametagBehavior m_squadBehavior; // 0x68 (104)
		UINametagBehavior m_friendlyBehavior; // 0x80 (128)
		UINametagBehavior m_importantFriendlyBehavior; // 0x98 (152)
		UINametagBehavior m_friendlyGadgetBehavior; // 0xB0 (176)
		UINametagBehavior m_neutralBehavior; // 0xC8 (200)
		UINametagBehavior m_enemyBehavior; // 0xE0 (224)
		UINametagBehavior m_spottedEnemyBehavior; // 0xF8 (248)
		float m_activeBlinkRate; // 0x110 (272)
		float m_fadeInTime; // 0x114 (276)
		float m_fadeOutTime; // 0x118 (280)
		float m_potentialTargetOpacity; // 0x11C (284)
	}; // 0x120 (288)
}

