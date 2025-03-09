///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlurFilter.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class PlanarReflectionComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlanarReflectionComponentData"); }
		virtual ~PlanarReflectionComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlanarReflectionComponentData() {
			m_keyColorReflection = Vec3(1.f, 0.971f, 0.914f);
			m_skyColorReflection = Vec3(0.318f, 0.341f, 0.4f);
			m_groundColorReflection = Vec3(0.05f, 0.05f, 0.05f);
			m_realm = Realm::Realm_Client;
			m_groundHeight = 0.f;
			m_viewDistance = 300.f;
			m_verticalBlurFilter = BlurFilter::BfGaussian9Pixels;
			m_verticalDeviation = 1.f;
			m_horizontalBlurFilter = BlurFilter::BfGaussian9Pixels;
			m_horizontalDeviation = 1.f;
			m_enable = false;
			m_terrainReflectionsEnable = true;
			m_skyRenderEnable = false;
			m_overideOutdoorLightColors = false;
		};

		Vec3 m_keyColorReflection; // 0x80 (128)
		Vec3 m_skyColorReflection; // 0x90 (144)
		Vec3 m_groundColorReflection; // 0xA0 (160)
		Realm m_realm; // 0xB0 (176)
		float m_groundHeight; // 0xB4 (180)
		float m_viewDistance; // 0xB8 (184)
		BlurFilter m_verticalBlurFilter; // 0xBC (188)
		float m_verticalDeviation; // 0xC0 (192)
		BlurFilter m_horizontalBlurFilter; // 0xC4 (196)
		float m_horizontalDeviation; // 0xC8 (200)
		bool m_enable; // 0xCC (204)
		bool m_terrainReflectionsEnable; // 0xCD (205)
		bool m_skyRenderEnable; // 0xCE (206)
		bool m_overideOutdoorLightColors; // 0xCF (207)
	}; // 0xD0 (208)
}

