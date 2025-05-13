///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BasicUnlockInfo.h>
#include <fb/BattlepackInfo.h>
#include <fb/RefArray.h>

namespace fb {
	class BattlepackBoostItem;
	class BoostData;
}

namespace fb {
	class BattlepackAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackAsset"); }
		virtual ~BattlepackAsset() override {}
		BattlepackAsset() {
		};

		Array<BattlepackInfo> m_battlepackInfos; // 0x18 (24)
		RefArray<BattlepackBoostItem> m_boostItems; // 0x20 (32)
		RefArray<BoostData> m_boosts; // 0x28 (40)
		Array<BasicUnlockInfo> m_unlockInfos; // 0x30 (48)
		Array<u32> m_premiumIds; // 0x38 (56)
		Array<u32> m_veteranIds; // 0x40 (64)
		Array<u32> m_weaponIds; // 0x48 (72)
	}; // 0x50 (80)
}

