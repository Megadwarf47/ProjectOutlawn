///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class PVZSpottingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSpottingComponentData"); }
		virtual ~PVZSpottingComponentData() override {}
		PVZSpottingComponentData() {
			m_spottingFov = 5.f;
			m_teamOrderFov = 15.f;
			m_spottingDistance = 1200.f;
			m_passiveSpottingTimeInterval = 1.f;
			m_timeRequiredToPassiveSpot = 2.f;
			m_orderNeedAmmoPercentage = 50.f;
			m_orderHealPercentage = 50.f;
			m_orderRepairPercentage = 65.f;
			m_pickupOrderDistance = 50.f;
			m_healOrderDistance = 30.f;
			m_ammoOrderDistance = 30.f;
			m_repairOrderDistance = 50.f;
			m_coolDownHistoryTime = 3.f;
			m_coolDownAllowedSpotsWithinHistory = 3;
			m_onlyAllowedToHaveOneSpottedPlayer = false;
			m_requireLineOfSight = true;
			m_passiveSpottingEnabled = false;
		};

		float m_spottingFov; // 0x70 (112)
		float m_teamOrderFov; // 0x74 (116)
		float m_spottingDistance; // 0x78 (120)
		float m_passiveSpottingTimeInterval; // 0x7C (124)
		float m_timeRequiredToPassiveSpot; // 0x80 (128)
		float m_orderNeedAmmoPercentage; // 0x84 (132)
		float m_orderHealPercentage; // 0x88 (136)
		float m_orderRepairPercentage; // 0x8C (140)
		float m_pickupOrderDistance; // 0x90 (144)
		float m_healOrderDistance; // 0x94 (148)
		float m_ammoOrderDistance; // 0x98 (152)
		float m_repairOrderDistance; // 0x9C (156)
		float m_coolDownHistoryTime; // 0xA0 (160)
		s32 m_coolDownAllowedSpotsWithinHistory; // 0xA4 (164)
		bool m_onlyAllowedToHaveOneSpottedPlayer; // 0xA8 (168)
		bool m_requireLineOfSight; // 0xA9 (169)
		bool m_passiveSpottingEnabled; // 0xAA (170)
	}; // 0xB0 (176)
}

