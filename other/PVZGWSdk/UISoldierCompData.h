///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UISoldierCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISoldierCompData"); }
		virtual ~UISoldierCompData() override {}
		UISoldierCompData() {
			m_criticalHealthThreshold = 10.f;
			m_shockTraumaAbilityIndex = -1;
			m_rangerPTProgramAbilityIndex = -1;
			m_focusAbilityIndex = -1;
			m_hitShaderDamageMultiplier = 1.f;
			m_hitShaderMinDamage = 0.1f;
			m_hitShaderMaxDamage = 0.6f;
			m_hitShaderGradientDurationMultiplier = 6.f;
			m_hitShaderIndicatorDurationMultiplier = 1.5f;
			m_ekgLineThickness = 12.f;
			m_ekgLineAlpha = 1.f;
			m_useSquadSpawn = true;
			m_spawnOnSquadLeaders = true;
			m_useVehicleTeamSpawn = true;
		};

		float m_criticalHealthThreshold; // 0x30 (48)
		s32 m_shockTraumaAbilityIndex; // 0x34 (52)
		s32 m_rangerPTProgramAbilityIndex; // 0x38 (56)
		s32 m_focusAbilityIndex; // 0x3C (60)
		float m_hitShaderDamageMultiplier; // 0x40 (64)
		float m_hitShaderMinDamage; // 0x44 (68)
		float m_hitShaderMaxDamage; // 0x48 (72)
		float m_hitShaderGradientDurationMultiplier; // 0x4C (76)
		float m_hitShaderIndicatorDurationMultiplier; // 0x50 (80)
		float m_ekgLineThickness; // 0x54 (84)
		float m_ekgLineAlpha; // 0x58 (88)
		bool m_useSquadSpawn; // 0x5C (92)
		bool m_spawnOnSquadLeaders; // 0x5D (93)
		bool m_useVehicleTeamSpawn; // 0x5E (94)
	}; // 0x60 (96)
}

