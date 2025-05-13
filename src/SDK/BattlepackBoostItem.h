///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class BoostData;
}

namespace fb {
	class BattlepackBoostItem : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackBoostItem"); }
		virtual ~BattlepackBoostItem() override {}
		BattlepackBoostItem() {
			m_identifier = 0;
		};

		String m_key; // 0x18 (24)
		CtrRef<BoostData> m_boost; // 0x20 (32)
		u32 m_identifier; // 0x28 (40)
	}; // 0x30 (48)
}

