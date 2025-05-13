///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUIEndOfRoundGameModeStats.h>
#include <fb/UIComponentData.h>

namespace fb {
	class PVZUIEndOfRoundStatsCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIEndOfRoundStatsCompData"); }
		virtual ~PVZUIEndOfRoundStatsCompData() override {}
		PVZUIEndOfRoundStatsCompData() {
		};

		Array<PVZUIEndOfRoundGameModeStats> m_stats; // 0x30 (48)
	}; // 0x38 (56)
}

