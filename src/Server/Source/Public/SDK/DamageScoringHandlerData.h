///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class DamageScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageScoringHandlerData"); }
		virtual ~DamageScoringHandlerData() override {}
		DamageScoringHandlerData() {
			m_repairVehicleLimit = 0.01f;
			m_damageTeamVehicleLimit = 0.5f;
			m_teamHealingLimit = 0.5f;
			m_teamDamageLimit = 0.5f;
			m_killAssistLimit = 0.5f;
			m_killAssistAsKillLimit = 0.75f;
			m_killAssistTimeout = 10.f;
			m_vehicleDestroyAssistLimit = 0.5f;
			m_saviorKillTimeout = 2.f;
			m_saviorDamageLimit = 0.5f;
			m_damageDoneTimeout = 10.f;
			m_damageDoneMaxValue = 1000.f;
			m_hotVehicleTimeout = 10.f;
			m_splashDamageTimeout = 0.5f;
			m_multiDamageTimeout = 0.8f;
			m_minMultiDamageCount = 2;
			m_justInTimeHealLimit = 20.f;
			m_killWithLowHealthLimit = 20.f;
			m_weaponKillAssistTimeLimit = 3.f;
			m_killCelebrationTimeout = 3.f;
			m_killYDifferenceLimit = 10.f;
			m_multiBuffTimeout = 0.8f;
			m_minMultiBuffCount = 2;
		};

		float m_repairVehicleLimit; // 0x10 (16)
		float m_damageTeamVehicleLimit; // 0x14 (20)
		float m_teamHealingLimit; // 0x18 (24)
		float m_teamDamageLimit; // 0x1C (28)
		float m_killAssistLimit; // 0x20 (32)
		float m_killAssistAsKillLimit; // 0x24 (36)
		float m_killAssistTimeout; // 0x28 (40)
		float m_vehicleDestroyAssistLimit; // 0x2C (44)
		float m_saviorKillTimeout; // 0x30 (48)
		float m_saviorDamageLimit; // 0x34 (52)
		float m_damageDoneTimeout; // 0x38 (56)
		float m_damageDoneMaxValue; // 0x3C (60)
		float m_hotVehicleTimeout; // 0x40 (64)
		float m_splashDamageTimeout; // 0x44 (68)
		float m_multiDamageTimeout; // 0x48 (72)
		u32 m_minMultiDamageCount; // 0x4C (76)
		float m_justInTimeHealLimit; // 0x50 (80)
		float m_killWithLowHealthLimit; // 0x54 (84)
		float m_weaponKillAssistTimeLimit; // 0x58 (88)
		float m_killCelebrationTimeout; // 0x5C (92)
		float m_killYDifferenceLimit; // 0x60 (96)
		float m_multiBuffTimeout; // 0x64 (100)
		u32 m_minMultiBuffCount; // 0x68 (104)
	}; // 0x70 (112)
}

