///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>
#include <fb/MirrorDamageTrapezoid.h>

namespace fb {
	class EffectBlueprint;
	class InputRestrictionAsset;
}

namespace fb {
	class RoadieSprintComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RoadieSprintComponentData"); }
		virtual ~RoadieSprintComponentData() override {}
		RoadieSprintComponentData() {
			m_heightOffset = 1.5f;
			m_knockdownXZForceMultiplier = 5.f;
			m_knockdownYForceMultiplier = 2.f;
			m_yawClamping = 0.55f;
			m_pitchClamping = 0.55f;
			m_rollClamping = 0.55f;
			m_sprintSpeed = 36.f;
			m_timeAtMaxSpeed = 0.3f;
			m_timeInBleedOff = 0.5f;
			m_primingTime = 0.f;
			m_doNotRequireFiring = false;
		};

		MirrorDamageTrapezoid m_knockbackTrapezoid; // 0x70 (112)
		float m_heightOffset; // 0x90 (144)
		float m_knockdownXZForceMultiplier; // 0x94 (148)
		float m_knockdownYForceMultiplier; // 0x98 (152)
		float m_yawClamping; // 0x9C (156)
		float m_pitchClamping; // 0xA0 (160)
		float m_rollClamping; // 0xA4 (164)
		CtrRef<EffectBlueprint> m_sprintingEffect; // 0xA8 (168)
		CtrRef<InputRestrictionAsset> m_sprintingRestrictedInput; // 0xB0 (176)
		float m_sprintSpeed; // 0xB8 (184)
		float m_timeAtMaxSpeed; // 0xBC (188)
		float m_timeInBleedOff; // 0xC0 (192)
		float m_primingTime; // 0xC4 (196)
		MaterialDecl m_materialPair; // 0xC8 (200)
		bool m_doNotRequireFiring; // 0xCC (204)
	}; // 0xD0 (208)
}

