///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwardData.h>
#include <fb/DurangoAchievementSettings.h>

namespace fb {
	class AwardAchievementData : public AwardData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwardAchievementData"); }
		virtual ~AwardAchievementData() override {}
		AwardAchievementData() {
		};

		DurangoAchievementSettings m_durangoSpecific; // 0xB8 (184)
	}; // 0xC0 (192)
}

