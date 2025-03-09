///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class FogEffectState : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FogEffectState"); }
		virtual ~FogEffectState() override {}
		FogEffectState() {
			m_start = 0.f;
			m_end = 5000.f;
			m_fogColor = Vec3(1.f, 1.f, 1.f);
			m_forwardLightScatteringColor = Vec3(1.f, 1.f, 1.f);
			m_fogColorStart = 0.f;
			m_fogColorEnd = 5000.f;
			m_transparencyFadeStart = 0.f;
			m_transparencyFadeEnd = 100.f;
			m_transparencyFadeClamp = 0.f;
			m_forwardLightScatteringPhaseG = 0.f;
			m_forwardLightScatteringStrength = 0.f;
			m_forwardLightScatteringPresence = 0.f;
			m_forwardLightScatteringMaxBlurLength = 0.5f;
			m_forwardLightScatteringExtinction = 14.f;
			m_forwardLightScatteringSmoothness = 4.f;
			m_heightFogFollowCamera = 0.f;
			m_heightFogAltitude = 1.f;
			m_heightFogDepth = 100.f;
			m_heightFogVisibilityRange = 100.f;
			m_enable = true;
			m_forwardLightScatteringEnabled = false;
			m_heightFogEnable = false;
		};

		float m_start; // 0x10 (16)
		float m_end; // 0x14 (20)
		Vec4 m_curve; // 0x20 (32)
		Vec3 m_fogColor; // 0x30 (48)
		Vec4 m_fogColorCurve; // 0x40 (64)
		Vec3 m_forwardLightScatteringColor; // 0x50 (80)
		float m_fogColorStart; // 0x60 (96)
		float m_fogColorEnd; // 0x64 (100)
		float m_transparencyFadeStart; // 0x68 (104)
		float m_transparencyFadeEnd; // 0x6C (108)
		float m_transparencyFadeClamp; // 0x70 (112)
		float m_forwardLightScatteringPhaseG; // 0x74 (116)
		float m_forwardLightScatteringStrength; // 0x78 (120)
		float m_forwardLightScatteringPresence; // 0x7C (124)
		float m_forwardLightScatteringMaxBlurLength; // 0x80 (128)
		float m_forwardLightScatteringExtinction; // 0x84 (132)
		float m_forwardLightScatteringSmoothness; // 0x88 (136)
		float m_heightFogFollowCamera; // 0x8C (140)
		float m_heightFogAltitude; // 0x90 (144)
		float m_heightFogDepth; // 0x94 (148)
		float m_heightFogVisibilityRange; // 0x98 (152)
		bool m_enable; // 0x9C (156)
		bool m_forwardLightScatteringEnabled; // 0x9D (157)
		bool m_heightFogEnable; // 0x9E (158)
	}; // 0xA0 (160)
}

