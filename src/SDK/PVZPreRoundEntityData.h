///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZPreRoundEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZPreRoundEntityData"); }
		virtual ~PVZPreRoundEntityData() override {}
		PVZPreRoundEntityData() {
			m_roundStartPlayerCount = 8;
			m_roundStartCountdown = 10;
			m_roundRestartPlayerCount = 4;
			m_roundRestartCountdown = 10;
			m_requireSpawnedPlayers = false;
		};

		s32 m_roundStartPlayerCount; // 0x18 (24)
		u32 m_roundStartCountdown; // 0x1C (28)
		s32 m_roundRestartPlayerCount; // 0x20 (32)
		u32 m_roundRestartCountdown; // 0x24 (36)
		bool m_requireSpawnedPlayers; // 0x28 (40)
	}; // 0x30 (48)
}

