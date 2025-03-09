///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	struct SkyCloudLayer {
		SkyCloudLayer() {
			m_color = Vec3(1.f, 1.f, 1.f);
			m_altitude = 10000.f;
			m_tileFactor = 0.25f;
			m_rotation = 0.f;
			m_speed = 0.01f;
			m_sunLightIntensity = 4.f;
			m_sunLightPower = 50.f;
			m_ambientLightIntensity = 0.2f;
			m_alphaMul = 1.f;
		};

		Vec3 m_color; // 0x0 (0)
		float m_altitude; // 0x10 (16)
		float m_tileFactor; // 0x14 (20)
		float m_rotation; // 0x18 (24)
		float m_speed; // 0x1C (28)
		float m_sunLightIntensity; // 0x20 (32)
		float m_sunLightPower; // 0x24 (36)
		float m_ambientLightIntensity; // 0x28 (40)
		float m_alphaMul; // 0x2C (44)
		CtrRef<TextureAsset> m_texture; // 0x30 (48)
	}; // 0x40 (64)
}

