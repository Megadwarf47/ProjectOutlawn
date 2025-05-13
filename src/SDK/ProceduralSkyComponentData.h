///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class ProceduralSkyComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralSkyComponentData"); }
		virtual ~ProceduralSkyComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ProceduralSkyComponentData() {
			m_rampColour1 = Vec3(1.f, 1.f, 1.f);
			m_rampColour2 = Vec3(1.f, 1.f, 1.f);
			m_rampColour3 = Vec3(1.f, 1.f, 1.f);
			m_rampColour4 = Vec3(1.f, 1.f, 1.f);
			m_rampColour5 = Vec3(1.f, 1.f, 1.f);
			m_rampColour6 = Vec3(1.f, 1.f, 1.f);
			m_rampColour7 = Vec3(1.f, 1.f, 1.f);
			m_rampColour8 = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_intensity = 1.f;
			m_rampPosition1 = -1.f;
			m_rampPosition2 = -0.75f;
			m_rampPosition3 = -0.5f;
			m_rampPosition4 = -0.25f;
			m_rampPosition5 = 0.f;
			m_rampPosition6 = 0.25f;
			m_rampPosition7 = 0.75f;
			m_rampPosition8 = 1.f;
			m_enable = true;
			m_overrideTextureGradient = false;
		};

		Vec3 m_rampColour1; // 0x70 (112)
		Vec3 m_rampColour2; // 0x80 (128)
		Vec3 m_rampColour3; // 0x90 (144)
		Vec3 m_rampColour4; // 0xA0 (160)
		Vec3 m_rampColour5; // 0xB0 (176)
		Vec3 m_rampColour6; // 0xC0 (192)
		Vec3 m_rampColour7; // 0xD0 (208)
		Vec3 m_rampColour8; // 0xE0 (224)
		Realm m_realm; // 0xF0 (240)
		float m_intensity; // 0xF4 (244)
		float m_rampPosition1; // 0xF8 (248)
		float m_rampPosition2; // 0xFC (252)
		float m_rampPosition3; // 0x100 (256)
		float m_rampPosition4; // 0x104 (260)
		float m_rampPosition5; // 0x108 (264)
		float m_rampPosition6; // 0x10C (268)
		float m_rampPosition7; // 0x110 (272)
		float m_rampPosition8; // 0x114 (276)
		bool m_enable; // 0x118 (280)
		bool m_overrideTextureGradient; // 0x119 (281)
	}; // 0x120 (288)
}

