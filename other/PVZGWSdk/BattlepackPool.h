///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BattlepackWeightedBoostItem.h>
#include <fb/BattlepackWeightedUnlockItem.h>
#include <fb/CtrRef.h>
#include <fb/RarenessLevel.h>
#include <fb/String.h>

namespace fb {
	class BattlepackFallbackChain;
}

namespace fb {
	class BattlepackPool : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackPool"); }
		virtual ~BattlepackPool() override {}
		BattlepackPool() {
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
		};

		String m_key; // 0x18 (24)
		String m_label; // 0x20 (32)
		String m_description; // 0x28 (40)
		RarenessLevel m_rarenessLevel; // 0x30 (48)
		Array<BattlepackWeightedUnlockItem> m_battlepackItems; // 0x38 (56)
		Array<BattlepackWeightedBoostItem> m_boosts; // 0x40 (64)
		CtrRef<BattlepackFallbackChain> m_fallbackChain; // 0x48 (72)
	}; // 0x50 (80)
}

