///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/MatchmakingCriteria.h>
#include <fb/MatchmakingSessionMode.h>
#include <fb/RefArray.h>

namespace fb {
	class GameParametersData;
	class MatchmakingModifier;
	class MatchmakingSession;
}

namespace fb {
	class MatchmakingSession : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MatchmakingSession"); }
		virtual ~MatchmakingSession() override {}
		MatchmakingSession() {
			m_mode = MatchmakingSessionMode::MatchmakingSessionMode_FindDedicatedServer;
			m_durationMs = 0;
		};

		MatchmakingSessionMode m_mode; // 0x10 (16)
		u32 m_durationMs; // 0x14 (20)
		MatchmakingCriteria m_criteria; // 0x18 (24)
		CtrRef<GameParametersData> m_createGameParams; // 0x88 (136)
		CtrRef<MatchmakingSession> m_onNotFound; // 0x90 (144)
		RefArray<MatchmakingModifier> m_modifiers; // 0x98 (152)
	}; // 0xA0 (160)
}

