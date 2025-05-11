///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class EnlightenComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenComponentData"); }
		virtual ~EnlightenComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EnlightenComponentData() {
			m_terrainColor = Vec3(0.1f, 0.1f, 0.1f);
			m_skyBoxSkyColor = Vec3(0.318f, 0.341f, 0.4f);
			m_skyBoxGroundColor = Vec3(0.05f, 0.05f, 0.05f);
			m_skyBoxSunLightColor = Vec3(1.f, 0.971f, 0.914f);
			m_skyBoxBackLightColor = Vec3(1.f, 0.971f, 0.914f);
			m_opaqueAlphaTestSimpleScale = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_bounceScale = 1.f;
			m_sunScale = 1.f;
			m_cullDistance = -1.f;
			m_cullRadius = 0.f;
			m_skyBoxSunLightColorSize = 0.f;
			m_skyBoxBackLightColorSize = 0.f;
			m_skyBoxBackLightRotationX = 0.f;
			m_skyBoxBackLightRotationY = 60.f;
			m_skyBoxEnable = true;
		};

		Vec3 m_terrainColor; // 0x80 (128)
		Vec3 m_skyBoxSkyColor; // 0x90 (144)
		Vec3 m_skyBoxGroundColor; // 0xA0 (160)
		Vec3 m_skyBoxSunLightColor; // 0xB0 (176)
		Vec3 m_skyBoxBackLightColor; // 0xC0 (192)
		Vec3 m_opaqueAlphaTestSimpleScale; // 0xD0 (208)
		Realm m_realm; // 0xE0 (224)
		float m_bounceScale; // 0xE4 (228)
		float m_sunScale; // 0xE8 (232)
		float m_cullDistance; // 0xEC (236)
		float m_cullRadius; // 0xF0 (240)
		float m_skyBoxSunLightColorSize; // 0xF4 (244)
		float m_skyBoxBackLightColorSize; // 0xF8 (248)
		float m_skyBoxBackLightRotationX; // 0xFC (252)
		float m_skyBoxBackLightRotationY; // 0x100 (256)
		bool m_skyBoxEnable; // 0x104 (260)
	}; // 0x110 (272)
}

