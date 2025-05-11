///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/GamePlatform.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class BattlepackData;
}

namespace fb {
	class CalendarBattlepackDrop : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CalendarBattlepackDrop"); }
		virtual ~CalendarBattlepackDrop() override {}
		CalendarBattlepackDrop() {
			m_validDays = 0;
			m_battlepackNumber = -1;
		};

		String m_releaseDateTime; // 0x10 (16)
		String m_requiredLicense; // 0x18 (24)
		s32 m_validDays; // 0x20 (32)
		RefArray<BattlepackData> m_battlepacks; // 0x28 (40)
		s32 m_battlepackNumber; // 0x30 (48)
		Array<GamePlatform> m_specificPlatforms; // 0x38 (56)
		String m_userData; // 0x40 (64)
	}; // 0x48 (72)
}

