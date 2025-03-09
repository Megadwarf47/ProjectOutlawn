///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class AimingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AimingComponentData"); }
		virtual ~AimingComponentData() override {}
		AimingComponentData() {
			m_trackHeatSignatureThreshold = -1.f;
			m_range = 100.f;
			m_angularTolerance = 10.f;
			m_pitchVelocity = 45.f;
			m_yawVelocity = 45.f;
			m_occlusionTimeout = 0.f;
			m_unoccupiedTimeout = 0.f;
			m_trackActivelySpottedTargets = true;
			m_trackPassivelySpottedTargets = false;
		};

		float m_trackHeatSignatureThreshold; // 0x70 (112)
		float m_range; // 0x74 (116)
		float m_angularTolerance; // 0x78 (120)
		float m_pitchVelocity; // 0x7C (124)
		float m_yawVelocity; // 0x80 (128)
		float m_occlusionTimeout; // 0x84 (132)
		float m_unoccupiedTimeout; // 0x88 (136)
		bool m_trackActivelySpottedTargets; // 0x8C (140)
		bool m_trackPassivelySpottedTargets; // 0x8D (141)
	}; // 0x90 (144)
}

