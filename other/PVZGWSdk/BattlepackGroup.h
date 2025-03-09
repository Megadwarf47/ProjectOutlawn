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
	class BattlepackData;
}

namespace fb {
	class BattlepackGroup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackGroup"); }
		virtual ~BattlepackGroup() override {}
		BattlepackGroup() {
		};

		String m_groupName; // 0x18 (24)
		RefArray<BattlepackData> m_battlepacks; // 0x20 (32)
	}; // 0x28 (40)
}

