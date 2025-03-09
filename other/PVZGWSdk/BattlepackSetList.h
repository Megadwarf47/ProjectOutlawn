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
	class BattlepackSet;
}

namespace fb {
	class BattlepackSetList : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackSetList"); }
		virtual ~BattlepackSetList() override {}
		BattlepackSetList() {
		};

		RefArray<BattlepackSet> m_sets; // 0x18 (24)
	}; // 0x20 (32)
}

