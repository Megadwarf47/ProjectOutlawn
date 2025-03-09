///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/SkyCloudLayer.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class SkyEffectState : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkyEffectState"); }
		virtual ~SkyEffectState() override {}
		SkyEffectState() {
			m_sunSize = 0.004f;
			m_sunScale = 1.f;
			m_cloudLayerSunColor = Vec3(1.f, 1.f, 1.f);
			m_skyGradientScale = 2.f;
			m_panoramicUVMinX = 0.f;
			m_panoramicUVMaxX = 1.f;
			m_panoramicUVMinY = 0.f;
			m_panoramicUVMaxY = 1.f;
			m_panoramicTileFactor = 1.f;
			m_panoramicRotation = 0.f;
			m_windDirection = 0.f;
			m_enable = true;
		};

		float m_sunSize; // 0x10 (16)
		float m_sunScale; // 0x14 (20)
		Vec3 m_cloudLayerSunColor; // 0x20 (32)
		SkyCloudLayer m_cloudLayer1; // 0x30 (48)
		SkyCloudLayer m_cloudLayer2; // 0x70 (112)
		float m_skyGradientScale; // 0xB0 (176)
		CtrRef<TextureAsset> m_skyGradientTexture; // 0xB8 (184)
		float m_panoramicUVMinX; // 0xC0 (192)
		float m_panoramicUVMaxX; // 0xC4 (196)
		float m_panoramicUVMinY; // 0xC8 (200)
		float m_panoramicUVMaxY; // 0xCC (204)
		float m_panoramicTileFactor; // 0xD0 (208)
		float m_panoramicRotation; // 0xD4 (212)
		CtrRef<TextureAsset> m_panoramicTexture; // 0xD8 (216)
		CtrRef<TextureAsset> m_panoramicAlphaTexture; // 0xE0 (224)
		CtrRef<TextureAsset> m_cloudLayerMaskTexture; // 0xE8 (232)
		CtrRef<TextureAsset> m_staticEnvmapTexture; // 0xF0 (240)
		float m_windDirection; // 0xF8 (248)
		bool m_enable; // 0xFC (252)
	}; // 0x100 (256)
}

