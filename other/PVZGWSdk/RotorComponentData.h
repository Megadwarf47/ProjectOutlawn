///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/RotationAxis.h>
#include <fb/RotorModelData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class RotorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RotorComponentData"); }
		virtual ~RotorComponentData() override {}
		RotorComponentData() {
			m_rotationAxis = RotationAxis::raX;
			m_rotationMultiplier = 0.f;
			m_changeModelRpm = 0.f;
			m_triggerGroundEffectHeight = 0.f;
			m_criticallyDamagedRotationForce = 0.f;
			m_onlyTriggerBlowEffectInWater = true;
			m_groundEffectOnTerrainOnly = false;
			m_criticalDamage = false;
		};

		RotorModelData m_lowRpmModel; // 0x70 (112)
		RotorModelData m_highRpmModel; // 0x78 (120)
		RotationAxis m_rotationAxis; // 0x80 (128)
		float m_rotationMultiplier; // 0x84 (132)
		float m_changeModelRpm; // 0x88 (136)
		CtrRef<EffectBlueprint> m_blowEffect; // 0x90 (144)
		float m_triggerGroundEffectHeight; // 0x98 (152)
		float m_criticallyDamagedRotationForce; // 0x9C (156)
		bool m_onlyTriggerBlowEffectInWater; // 0xA0 (160)
		bool m_groundEffectOnTerrainOnly; // 0xA1 (161)
		bool m_criticalDamage; // 0xA2 (162)
	}; // 0xB0 (176)
}

