///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class FogComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FogComponentData"); }
		virtual ~FogComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FogComponentData() {
			m_fogColor = Vec3(1.f, 1.f, 1.f);
			m_transparencyFadeCurve = Vec4(-2.f, 3.f, 0.f, 0.f);
			m_forwardLightScatteringColor = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_fogDistanceMultiplier = 1.f;
			m_start = 0.f;
			m_end = 5000.f;
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
			m_heightFogAltitude = 0.f;
			m_heightFogDepth = 100.f;
			m_heightFogVisibilityRange = 100.f;
			m_enable = true;
			m_fogGradientEnable = true;
			m_fogColorEnable = true;
			m_forwardLightScatteringEnabled = false;
			m_heightFogEnable = false;
		};

		Vec4 m_curve; // 0x80 (128)
		Vec3 m_fogColor; // 0x90 (144)
		Vec4 m_fogColorCurve; // 0xA0 (160)
		Vec4 m_transparencyFadeCurve; // 0xB0 (176)
		Vec3 m_forwardLightScatteringColor; // 0xC0 (192)
		Realm m_realm; // 0xD0 (208)
		float m_fogDistanceMultiplier; // 0xD4 (212)
		float m_start; // 0xD8 (216)
		float m_end; // 0xDC (220)
		float m_fogColorStart; // 0xE0 (224)
		float m_fogColorEnd; // 0xE4 (228)
		float m_transparencyFadeStart; // 0xE8 (232)
		float m_transparencyFadeEnd; // 0xEC (236)
		float m_transparencyFadeClamp; // 0xF0 (240)
		float m_forwardLightScatteringPhaseG; // 0xF4 (244)
		float m_forwardLightScatteringStrength; // 0xF8 (248)
		float m_forwardLightScatteringPresence; // 0xFC (252)
		float m_forwardLightScatteringMaxBlurLength; // 0x100 (256)
		float m_forwardLightScatteringExtinction; // 0x104 (260)
		float m_forwardLightScatteringSmoothness; // 0x108 (264)
		float m_heightFogFollowCamera; // 0x10C (268)
		float m_heightFogAltitude; // 0x110 (272)
		float m_heightFogDepth; // 0x114 (276)
		float m_heightFogVisibilityRange; // 0x118 (280)
		bool m_enable; // 0x11C (284)
		bool m_fogGradientEnable; // 0x11D (285)
		bool m_fogColorEnable; // 0x11E (286)
		bool m_forwardLightScatteringEnabled; // 0x11F (287)
		bool m_heightFogEnable; // 0x120 (288)
	}; // 0x130 (304)
}

