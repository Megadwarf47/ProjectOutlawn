///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ScoreboardPosition.h>
#include <fb/StatsCategoryBaseData.h>

namespace fb {
	class StatsCategoryScoreboardPositionData : public StatsCategoryBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryScoreboardPositionData"); }
		virtual ~StatsCategoryScoreboardPositionData() override {}
		StatsCategoryScoreboardPositionData() {
		};

		Array<ScoreboardPosition> m_positions; // 0x20 (32)
	}; // 0x28 (40)
}

