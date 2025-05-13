///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class SkyComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkyComponentData"); }
		virtual ~SkyComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SkyComponentData() {
			m_cloudLayerSunColor = Vec3(1.f, 1.f, 1.f);
			m_cloudLayer1Color = Vec3(1.f, 1.f, 1.f);
			m_cloudLayer2Color = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_brightnessScale = 2.f;
			m_sunSize = 0.004f;
			m_sunScale = 1.f;
			m_panoramicUVMinX = 0.f;
			m_panoramicUVMaxX = 1.f;
			m_panoramicUVMinY = 0.f;
			m_panoramicUVMaxY = 1.f;
			m_panoramicTileFactor = 1.f;
			m_panoramicRotation = 0.f;
			m_cloudLayer1Altitude = 10000.f;
			m_cloudLayer1TileFactor = 0.25f;
			m_cloudLayer1Rotation = 0.f;
			m_cloudLayer1Speed = 0.01f;
			m_cloudLayer1SunLightIntensity = 4.f;
			m_cloudLayer1SunLightPower = 50.f;
			m_cloudLayer1AmbientLightIntensity = 0.2f;
			m_cloudLayer1AlphaMul = 1.f;
			m_cloudLayer2Altitude = 10000.f;
			m_cloudLayer2TileFactor = 0.25f;
			m_cloudLayer2Rotation = 0.f;
			m_cloudLayer2Speed = 0.01f;
			m_cloudLayer2SunLightIntensity = 4.f;
			m_cloudLayer2SunLightPower = 50.f;
			m_cloudLayer2AmbientLightIntensity = 0.2f;
			m_cloudLayer2AlphaMul = 1.f;
			m_staticEnvmapScale = 1.f;
			m_skyEnvmap8BitTexScale = 0.25f;
			m_customEnvmapScale = 1.f;
			m_customEnvmapAmbient = 0.f;
			m_skyVisibilityExponent = 1.f;
			m_enable = true;
			m_indirectCubeMapOverride = false;
		};

		Vec3 m_cloudLayerSunColor; // 0x80 (128)
		Vec3 m_cloudLayer1Color; // 0x90 (144)
		Vec3 m_cloudLayer2Color; // 0xA0 (160)
		Realm m_realm; // 0xB0 (176)
		float m_brightnessScale; // 0xB4 (180)
		CtrRef<TextureAsset> m_skyGradientTexture; // 0xB8 (184)
		float m_sunSize; // 0xC0 (192)
		float m_sunScale; // 0xC4 (196)
		float m_panoramicUVMinX; // 0xC8 (200)
		float m_panoramicUVMaxX; // 0xCC (204)
		float m_panoramicUVMinY; // 0xD0 (208)
		float m_panoramicUVMaxY; // 0xD4 (212)
		float m_panoramicTileFactor; // 0xD8 (216)
		float m_panoramicRotation; // 0xDC (220)
		CtrRef<TextureAsset> m_panoramicTexture; // 0xE0 (224)
		CtrRef<TextureAsset> m_panoramicAlphaTexture; // 0xE8 (232)
		CtrRef<TextureAsset> m_cloudLayerMaskTexture; // 0xF0 (240)
		float m_cloudLayer1Altitude; // 0xF8 (248)
		float m_cloudLayer1TileFactor; // 0xFC (252)
		float m_cloudLayer1Rotation; // 0x100 (256)
		float m_cloudLayer1Speed; // 0x104 (260)
		float m_cloudLayer1SunLightIntensity; // 0x108 (264)
		float m_cloudLayer1SunLightPower; // 0x10C (268)
		float m_cloudLayer1AmbientLightIntensity; // 0x110 (272)
		float m_cloudLayer1AlphaMul; // 0x114 (276)
		CtrRef<TextureAsset> m_cloudLayer1Texture; // 0x118 (280)
		float m_cloudLayer2Altitude; // 0x120 (288)
		float m_cloudLayer2TileFactor; // 0x124 (292)
		float m_cloudLayer2Rotation; // 0x128 (296)
		float m_cloudLayer2Speed; // 0x12C (300)
		float m_cloudLayer2SunLightIntensity; // 0x130 (304)
		float m_cloudLayer2SunLightPower; // 0x134 (308)
		float m_cloudLayer2AmbientLightIntensity; // 0x138 (312)
		float m_cloudLayer2AlphaMul; // 0x13C (316)
		CtrRef<TextureAsset> m_cloudLayer2Texture; // 0x140 (320)
		CtrRef<TextureAsset> m_staticEnvmapTexture; // 0x148 (328)
		float m_staticEnvmapScale; // 0x150 (336)
		float m_skyEnvmap8BitTexScale; // 0x154 (340)
		CtrRef<TextureAsset> m_customEnvmapTexture; // 0x158 (344)
		float m_customEnvmapScale; // 0x160 (352)
		float m_customEnvmapAmbient; // 0x164 (356)
		float m_skyVisibilityExponent; // 0x168 (360)
		bool m_enable; // 0x16C (364)
		bool m_indirectCubeMapOverride; // 0x16D (365)
	}; // 0x170 (368)
}

