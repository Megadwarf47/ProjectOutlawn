///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class EnlightenState : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenState"); }
		virtual ~EnlightenState() override {}
		EnlightenState() {
			m_bounceScale = 1.f;
			m_sunScale = 1.f;
			m_skyBoxSkyColor = Vec3(0.318f, 0.341f, 0.4f);
			m_skyBoxGroundColor = Vec3(0.05f, 0.05f, 0.05f);
			m_skyBoxSunLightColor = Vec3(1.f, 0.971f, 0.914f);
			m_skyBoxBackLightColor = Vec3(1.f, 0.971f, 0.914f);
			m_outputScale = 1.f;
			m_skyBoxSunLightColorSize = 0.f;
			m_skyBoxBackLightColorSize = 0.f;
			m_skyBoxBackLightRotationX = 0.f;
			m_skyBoxBackLightRotationY = 60.f;
			m_skyBoxEnable = true;
		};

		float m_bounceScale; // 0x10 (16)
		float m_sunScale; // 0x14 (20)
		Vec3 m_skyBoxSkyColor; // 0x20 (32)
		Vec3 m_skyBoxGroundColor; // 0x30 (48)
		Vec3 m_skyBoxSunLightColor; // 0x40 (64)
		Vec3 m_skyBoxBackLightColor; // 0x50 (80)
		float m_outputScale; // 0x60 (96)
		float m_skyBoxSunLightColorSize; // 0x64 (100)
		float m_skyBoxBackLightColorSize; // 0x68 (104)
		float m_skyBoxBackLightRotationX; // 0x6C (108)
		float m_skyBoxBackLightRotationY; // 0x70 (112)
		bool m_skyBoxEnable; // 0x74 (116)
	}; // 0x80 (128)
}

