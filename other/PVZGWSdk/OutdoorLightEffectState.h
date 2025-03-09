///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class OutdoorLightEffectState : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OutdoorLightEffectState"); }
		virtual ~OutdoorLightEffectState() override {}
		OutdoorLightEffectState() {
			m_sunRotationX = 0.f;
			m_sunRotationY = 60.f;
			m_sunColor = Vec3(1.f, 0.971f, 0.914f);
			m_skyColor = Vec3(0.318f, 0.341f, 0.4f);
			m_groundColor = Vec3(0.05f, 0.05f, 0.05f);
			m_skyLightAngleFactor = 0.f;
			m_sunShadowHeightScale = 0.5f;
			m_cloudShadowSpeed = Vec2(2.f, 2.f);
			m_cloudShadowSize = 500.f;
			m_cloudShadowCoverage = 0.3f;
			m_cloudShadowExponent = 8.f;
			m_enable = true;
			m_cloudShadowEnable = true;
		};

		float m_sunRotationX; // 0x10 (16)
		float m_sunRotationY; // 0x14 (20)
		Vec3 m_sunColor; // 0x20 (32)
		Vec3 m_skyColor; // 0x30 (48)
		Vec3 m_groundColor; // 0x40 (64)
		float m_skyLightAngleFactor; // 0x50 (80)
		float m_sunShadowHeightScale; // 0x54 (84)
		CtrRef<TextureAsset> m_cloudShadowTexture; // 0x58 (88)
		Vec2 m_cloudShadowSpeed; // 0x60 (96)
		float m_cloudShadowSize; // 0x68 (104)
		float m_cloudShadowCoverage; // 0x6C (108)
		float m_cloudShadowExponent; // 0x70 (112)
		bool m_enable; // 0x74 (116)
		bool m_cloudShadowEnable; // 0x75 (117)
	}; // 0x80 (128)
}

