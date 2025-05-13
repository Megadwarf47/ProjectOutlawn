///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class BattlepackGroup;
}

namespace fb {
	class BattlepackTable : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackTable"); }
		virtual ~BattlepackTable() override {}
		BattlepackTable() {
		};

		String m_tableName; // 0x18 (24)
		RefArray<BattlepackGroup> m_groups; // 0x20 (32)
	}; // 0x28 (40)
}

