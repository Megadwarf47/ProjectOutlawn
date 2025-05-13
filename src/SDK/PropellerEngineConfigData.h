///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EngineConfigData.h>
#include <fb/ForceMagnitudeInputType.h>
#include <fb/PropellerType.h>
#include <fb/Vec3.h>

namespace fb {
	class RotorParameters;
}

namespace fb {
	class PropellerEngineConfigData : public EngineConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropellerEngineConfigData"); }
		virtual ~PropellerEngineConfigData() override {}
		PropellerEngineConfigData() {
			m_propellerType = PropellerType::PropellerType_Rotor;
			m_forceMagnitudeInputType = ForceMagnitudeInputType::FMITYaw;
			m_directionVectorIndex = 0;
			m_forceMagnitudeMultiplier = 2.f;
			m_liftForceSpringConstant = 40000.f;
			m_liftForceDampingConstant = 20000.f;
			m_cyclicInputScaleRoll = 0.2f;
			m_cyclicRollLiftMod = 1.f;
			m_cyclicRollStrafeMod = 1.f;
			m_cyclicInputScalePitch = 0.2f;
			m_cyclicPitchLiftMod = 1.f;
			m_cyclicPitchStrafeMod = 1.f;
			m_cyclicPitchStrafeBrakeMod = 1.f;
			m_collectiveInputIdle = 0.9f;
			m_collectiveThrottleInputScale = 1.1f;
			m_collectiveBrakeInputScale = 1.1f;
			m_defaultAngleOfAttack = 0.f;
			m_attackAngleMod = 1.f;
			m_stabilizerMod = 1.f;
			m_horisontalMinEffectVelocity = 20.f;
			m_horisontalMinEffectMod = 0.2f;
			m_spForwardInput = ForceMagnitudeInputType::FMITStrafe;
			m_spSidewaysInput = ForceMagnitudeInputType::FMITRoll;
			m_spVerticalInput = ForceMagnitudeInputType::FMITThrottle;
			m_spPitchInput = ForceMagnitudeInputType::FMITPitch;
			m_spYawInput = ForceMagnitudeInputType::FMITYaw;
			m_spForwardStrength = 30.f;
			m_spSidewaysStrength = 10.f;
			m_spVerticalStrength = 10.f;
			m_spReverseForceMod = 0.5f;
			m_pitchStrength = 20.f;
			m_pitchLimit = 0.5f;
			m_pitchFromVel = 20.f;
			m_velocityFromPitch = 0.f;
			m_rollStrength = 25.f;
			m_bankingStrength = 40.f;
			m_bankingLimit = 10.f;
			m_pitchUpWhenBankStrength = 6.f;
			m_pitchUpWhenBankLimit = 2.f;
			m_gravityMod = 0.1f;
			m_applyForceAsTorque = false;
			m_enableNewHelicopter = true;
			m_spAllowed = false;
			m_spDefault = false;
		};

		Vec3 m_horisontalForceOffset; // 0x70 (112)
		PropellerType m_propellerType; // 0x80 (128)
		CtrRef<RotorParameters> m_rotorConfig; // 0x88 (136)
		ForceMagnitudeInputType m_forceMagnitudeInputType; // 0x90 (144)
		u32 m_directionVectorIndex; // 0x94 (148)
		float m_forceMagnitudeMultiplier; // 0x98 (152)
		float m_liftForceSpringConstant; // 0x9C (156)
		float m_liftForceDampingConstant; // 0xA0 (160)
		float m_cyclicInputScaleRoll; // 0xA4 (164)
		float m_cyclicRollLiftMod; // 0xA8 (168)
		float m_cyclicRollStrafeMod; // 0xAC (172)
		float m_cyclicInputScalePitch; // 0xB0 (176)
		float m_cyclicPitchLiftMod; // 0xB4 (180)
		float m_cyclicPitchStrafeMod; // 0xB8 (184)
		float m_cyclicPitchStrafeBrakeMod; // 0xBC (188)
		float m_collectiveInputIdle; // 0xC0 (192)
		float m_collectiveThrottleInputScale; // 0xC4 (196)
		float m_collectiveBrakeInputScale; // 0xC8 (200)
		float m_defaultAngleOfAttack; // 0xCC (204)
		float m_attackAngleMod; // 0xD0 (208)
		float m_stabilizerMod; // 0xD4 (212)
		float m_horisontalMinEffectVelocity; // 0xD8 (216)
		float m_horisontalMinEffectMod; // 0xDC (220)
		ForceMagnitudeInputType m_spForwardInput; // 0xE0 (224)
		ForceMagnitudeInputType m_spSidewaysInput; // 0xE4 (228)
		ForceMagnitudeInputType m_spVerticalInput; // 0xE8 (232)
		ForceMagnitudeInputType m_spPitchInput; // 0xEC (236)
		ForceMagnitudeInputType m_spYawInput; // 0xF0 (240)
		float m_spForwardStrength; // 0xF4 (244)
		float m_spSidewaysStrength; // 0xF8 (248)
		float m_spVerticalStrength; // 0xFC (252)
		float m_spReverseForceMod; // 0x100 (256)
		float m_pitchStrength; // 0x104 (260)
		float m_pitchLimit; // 0x108 (264)
		float m_pitchFromVel; // 0x10C (268)
		float m_velocityFromPitch; // 0x110 (272)
		float m_rollStrength; // 0x114 (276)
		float m_bankingStrength; // 0x118 (280)
		float m_bankingLimit; // 0x11C (284)
		float m_pitchUpWhenBankStrength; // 0x120 (288)
		float m_pitchUpWhenBankLimit; // 0x124 (292)
		float m_gravityMod; // 0x128 (296)
		bool m_applyForceAsTorque; // 0x12C (300)
		bool m_enableNewHelicopter; // 0x12D (301)
		bool m_spAllowed; // 0x12E (302)
		bool m_spDefault; // 0x12F (303)
	}; // 0x130 (304)
}

