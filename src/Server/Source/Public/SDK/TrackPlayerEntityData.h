///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class TrackPlayerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrackPlayerEntityData"); }
		virtual ~TrackPlayerEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		TrackPlayerEntityData() {
			m_snapHeightOffsetY = 1.3f;
			m_randomizeTracker = false;
			m_enabled = true;
			m_snapHeightOnKilledDestroyed = false;
			m_snapToExitPointOnVehicleDeath = false;
			m_checkPlayerAlive = false;
			m_enforceSharedCombatArea = false;
			m_updateFlagComponent = false;
			m_trackMultiplePlayers = false;
			m_trackHealth = false;
			m_reset = false;
		};

		float m_snapHeightOffsetY; // 0x60 (96)
		bool m_randomizeTracker; // 0x64 (100)
		bool m_enabled; // 0x65 (101)
		bool m_snapHeightOnKilledDestroyed; // 0x66 (102)
		bool m_snapToExitPointOnVehicleDeath; // 0x67 (103)
		bool m_checkPlayerAlive; // 0x68 (104)
		bool m_enforceSharedCombatArea; // 0x69 (105)
		bool m_updateFlagComponent; // 0x6A (106)
		bool m_trackMultiplePlayers; // 0x6B (107)
		bool m_trackHealth; // 0x6C (108)
		bool m_reset; // 0x6D (109)
	}; // 0x70 (112)
}

