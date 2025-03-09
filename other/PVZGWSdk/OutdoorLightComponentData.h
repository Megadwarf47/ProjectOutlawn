///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class OutdoorLightComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OutdoorLightComponentData"); }
		virtual ~OutdoorLightComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		OutdoorLightComponentData() {
			m_sunColor = Vec3(1.f, 0.971f, 0.914f);
			m_skyColor = Vec3(0.318f, 0.341f, 0.4f);
			m_groundColor = Vec3(0.05f, 0.05f, 0.05f);
			m_realm = Realm::Realm_Client;
			m_sunRotationX = 0.f;
			m_sunRotationY = 60.f;
			m_shadowSunRotationX = 0.f;
			m_shadowSunRotationY = 60.f;
			m_skyLightAngleFactor = 0.f;
			m_sunSpecularScale = 1.f;
			m_skyEnvmapShadowScale = 1.f;
			m_sunShadowHeightScale = 0.5f;
			m_cloudShadowSpeed = Vec2(2.f, 2.f);
			m_cloudShadowSize = 500.f;
			m_cloudShadowCoverage = 0.3f;
			m_cloudShadowExponent = 8.f;
			m_cloudShadowStartFade = -1.f;
			m_cloudShadowsFadeDistance = 0.f;
			m_translucencyAmbient = 0.f;
			m_translucencyScale = 0.f;
			m_translucencyPower = 8.f;
			m_translucencyDistortion = 0.1f;
			m_enable = true;
			m_shadowSunRotationEnable = false;
			m_cloudShadowEnable = true;
			m_cloudShadowIsTopDown = false;
		};

		Vec3 m_sunColor; // 0x80 (128)
		Vec3 m_skyColor; // 0x90 (144)
		Vec3 m_groundColor; // 0xA0 (160)
		Realm m_realm; // 0xB0 (176)
		float m_sunRotationX; // 0xB4 (180)
		float m_sunRotationY; // 0xB8 (184)
		float m_shadowSunRotationX; // 0xBC (188)
		float m_shadowSunRotationY; // 0xC0 (192)
		float m_skyLightAngleFactor; // 0xC4 (196)
		float m_sunSpecularScale; // 0xC8 (200)
		float m_skyEnvmapShadowScale; // 0xCC (204)
		float m_sunShadowHeightScale; // 0xD0 (208)
		CtrRef<TextureAsset> m_cloudShadowTexture; // 0xD8 (216)
		Vec2 m_cloudShadowSpeed; // 0xE0 (224)
		float m_cloudShadowSize; // 0xE8 (232)
		float m_cloudShadowCoverage; // 0xEC (236)
		float m_cloudShadowExponent; // 0xF0 (240)
		float m_cloudShadowStartFade; // 0xF4 (244)
		float m_cloudShadowsFadeDistance; // 0xF8 (248)
		float m_translucencyAmbient; // 0xFC (252)
		float m_translucencyScale; // 0x100 (256)
		float m_translucencyPower; // 0x104 (260)
		float m_translucencyDistortion; // 0x108 (264)
		bool m_enable; // 0x10C (268)
		bool m_shadowSunRotationEnable; // 0x10D (269)
		bool m_cloudShadowEnable; // 0x10E (270)
		bool m_cloudShadowIsTopDown; // 0x10F (271)
	}; // 0x110 (272)
}

