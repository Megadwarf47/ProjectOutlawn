///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class CalendarBattlepackDrop;
}

namespace fb {
	class CalendarBattlepacksAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CalendarBattlepacksAsset"); }
		virtual ~CalendarBattlepacksAsset() override {}
		CalendarBattlepacksAsset() {
		};

		RefArray<CalendarBattlepackDrop> m_drops; // 0x18 (24)
	}; // 0x20 (32)
}

