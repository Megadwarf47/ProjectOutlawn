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
	class BattlepackPool;
}

namespace fb {
	class BattlepackPoolList : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackPoolList"); }
		virtual ~BattlepackPoolList() override {}
		BattlepackPoolList() {
		};

		RefArray<BattlepackPool> m_pools; // 0x18 (24)
	}; // 0x20 (32)
}

