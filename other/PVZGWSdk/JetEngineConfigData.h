///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EngineConfigData.h>
#include <fb/SensitivityAtVelocity.h>
#include <fb/Vec2.h>

namespace fb {
	class JetEngineConfigData : public EngineConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("JetEngineConfigData"); }
		virtual ~JetEngineConfigData() override {}
		JetEngineConfigData() {
			m_directionVectorIndex = 2;
			m_forceMagnitudeMultiplier = 100.f;
			m_angleInputYMultiplier = 90.f;
			m_angleInputPitchMultiplier = 0.f;
			m_pitchForceModifier = 1.f;
			m_maxVelocity = 0.f;
			m_powerFadeOutRange = Vec2(1000.f, 1500.f);
			m_isTurnable = true;
			m_isWaterJetEngine = true;
			m_useForcePositionWaterTest = true;
			m_useHullInWaterTest = false;
		};

		u32 m_directionVectorIndex; // 0x70 (112)
		float m_forceMagnitudeMultiplier; // 0x74 (116)
		float m_angleInputYMultiplier; // 0x78 (120)
		float m_angleInputPitchMultiplier; // 0x7C (124)
		float m_pitchForceModifier; // 0x80 (128)
		float m_maxVelocity; // 0x84 (132)
		Array<SensitivityAtVelocity> m_steeringSensitivity; // 0x88 (136)
		Vec2 m_powerFadeOutRange; // 0x90 (144)
		bool m_isTurnable; // 0x98 (152)
		bool m_isWaterJetEngine; // 0x99 (153)
		bool m_useForcePositionWaterTest; // 0x9A (154)
		bool m_useHullInWaterTest; // 0x9B (155)
	}; // 0xA0 (160)
}

