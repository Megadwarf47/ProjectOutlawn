///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class AbstractLeaderboardData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AbstractLeaderboardData"); }
		virtual ~AbstractLeaderboardData() override {}
		AbstractLeaderboardData() {
		};

		String m_leaderboardName; // 0x10 (16)
	}; // 0x18 (24)
}

