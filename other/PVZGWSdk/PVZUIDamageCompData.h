///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PlatformScalableFloat.h>
#include <fb/UI3dIconCompData.h>
#include <fb/Vec3.h>

namespace fb {
	class PVZUIDamageCompData : public UI3dIconCompData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIDamageCompData"); }
		virtual ~PVZUIDamageCompData() override {}
		PVZUIDamageCompData() {
			m_healPrimaryColor = Vec3(0.4f, 1.f, 0.4f);
			m_healGlowColor = Vec3(0.f, 0.35f, 0.f);
			m_normalPrimaryColor = Vec3(1.f, 0.4f, 0.4f);
			m_normalGlowColor = Vec3(0.35f, 0.f, 0.f);
			m_turretPrimaryColor = Vec3(0.86f, 0.75f, 0.75f);
			m_turretGlowColor = Vec3(0.5f, 0.25f, 0.25f);
			m_firePrimaryColor = Vec3(1.f, 0.87f, 0.5f);
			m_fireGlowColor = Vec3(1.f, 0.25f, 0.f);
			m_icePrimaryColor = Vec3(0.9f, 0.98f, 1.f);
			m_iceGlowColor = Vec3(0.f, 0.4f, 0.8f);
			m_toxicPrimaryColor = Vec3(0.67f, 1.f, 0.f);
			m_toxicGlowColor = Vec3(0.17f, 0.5f, 0.f);
			m_energyPrimaryColor = Vec3(0.9f, 1.f, 1.f);
			m_energyGlowColor = Vec3(1.f, 0.75f, 0.f);
			m_energyShadowColor = Vec3(0.f, 0.42f, 0.f);
			m_electricPrimaryColor = Vec3(1.f, 1.f, 0.9f);
			m_electricGlowColor = Vec3(0.f, 0.9f, 0.9f);
			m_electricShadowColor = Vec3(1.f, 0.5f, 1.f);
			m_criticalPOWTint = Vec3(1.f, 1.f, 1.f);
			m_normalDamageAnimTime = 0.5f;
			m_normalDamageYValue = -40.f;
			m_criticalDamageYValue = -60.f;
			m_normalFadeOutDuration = 0.1f;
			m_criticalFadeOutDuration = 0.2f;
			m_xValueRange = 20;
			m_criticalStage1Time = 0.266f;
			m_criticalTotalTime = 1.f;
			m_blockedNumberBounce = -40.f;
			m_blockedShieldBounce = -30.f;
			m_blockedNumberDuration = 0.5f;
			m_blockedShieldDuration = 0.5f;
			m_blockedNumberFadeDuration = 0.2f;
			m_blockedShieldFadeDuration = 0.2f;
			m_normalFontTextSize = PlatformScalableFloat(20.f, 20.f, 20.f, 20.f, 20.f);
			m_criticalFontTextSize = PlatformScalableFloat(30.f, 30.f, 30.f, 30.f, 30.f);
			m_blockedFontTextSize = PlatformScalableFloat(20.f, 20.f, 20.f, 20.f, 20.f);
			m_japaneseFontMultiplier = 2.f;
		};

		Vec3 m_healPrimaryColor; // 0xC0 (192)
		Vec3 m_healGlowColor; // 0xD0 (208)
		Vec3 m_normalPrimaryColor; // 0xE0 (224)
		Vec3 m_normalGlowColor; // 0xF0 (240)
		Vec3 m_turretPrimaryColor; // 0x100 (256)
		Vec3 m_turretGlowColor; // 0x110 (272)
		Vec3 m_firePrimaryColor; // 0x120 (288)
		Vec3 m_fireGlowColor; // 0x130 (304)
		Vec3 m_icePrimaryColor; // 0x140 (320)
		Vec3 m_iceGlowColor; // 0x150 (336)
		Vec3 m_toxicPrimaryColor; // 0x160 (352)
		Vec3 m_toxicGlowColor; // 0x170 (368)
		Vec3 m_energyPrimaryColor; // 0x180 (384)
		Vec3 m_energyGlowColor; // 0x190 (400)
		Vec3 m_energyShadowColor; // 0x1A0 (416)
		Vec3 m_electricPrimaryColor; // 0x1B0 (432)
		Vec3 m_electricGlowColor; // 0x1C0 (448)
		Vec3 m_electricShadowColor; // 0x1D0 (464)
		Vec3 m_criticalPOWTint; // 0x1E0 (480)
		float m_normalDamageAnimTime; // 0x1F0 (496)
		float m_normalDamageYValue; // 0x1F4 (500)
		float m_criticalDamageYValue; // 0x1F8 (504)
		float m_normalFadeOutDuration; // 0x1FC (508)
		float m_criticalFadeOutDuration; // 0x200 (512)
		s32 m_xValueRange; // 0x204 (516)
		float m_criticalStage1Time; // 0x208 (520)
		float m_criticalTotalTime; // 0x20C (524)
		float m_blockedNumberBounce; // 0x210 (528)
		float m_blockedShieldBounce; // 0x214 (532)
		float m_blockedNumberDuration; // 0x218 (536)
		float m_blockedShieldDuration; // 0x21C (540)
		float m_blockedNumberFadeDuration; // 0x220 (544)
		float m_blockedShieldFadeDuration; // 0x224 (548)
		PlatformScalableFloat m_normalFontTextSize; // 0x228 (552)
		PlatformScalableFloat m_criticalFontTextSize; // 0x23C (572)
		PlatformScalableFloat m_blockedFontTextSize; // 0x250 (592)
		float m_japaneseFontMultiplier; // 0x264 (612)
	}; // 0x270 (624)
}

