///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EnlightenColorMode.h>
#include <fb/SpatialEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class LocalLightEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalLightEntityData"); }
		virtual ~LocalLightEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LocalLightEntityData() {
			m_color = Vec3(1.f, 1.f, 1.f);
			m_enlightenColorScale = Vec3(1.f, 1.f, 1.f);
			m_particleColorScale = Vec3(1.f, 1.f, 1.f);
			m_radius = 10.f;
			m_intensity = 5.f;
			m_attenuationOffset = 0.01f;
			m_enlightenColorMode = EnlightenColorMode::EnlightenColorMode_Multiply;
			m_visible = true;
			m_directLightEnable = true;
			m_specularEnable = true;
			m_enlightenEnable = false;
		};

		Vec3 m_color; // 0x60 (96)
		Vec3 m_enlightenColorScale; // 0x70 (112)
		Vec3 m_particleColorScale; // 0x80 (128)
		float m_radius; // 0x90 (144)
		float m_intensity; // 0x94 (148)
		float m_attenuationOffset; // 0x98 (152)
		EnlightenColorMode m_enlightenColorMode; // 0x9C (156)
		bool m_visible; // 0xA0 (160)
		bool m_directLightEnable; // 0xA1 (161)
		bool m_specularEnable; // 0xA2 (162)
		bool m_enlightenEnable; // 0xA3 (163)
	}; // 0xB0 (176)
}

