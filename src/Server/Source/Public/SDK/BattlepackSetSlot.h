///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class BattlepackBoostItem;
	class BattlepackSlot;
	class UnlockAssetBase;
}

namespace fb {
	struct BattlepackSetSlot {
		BattlepackSetSlot() {
		};

		CtrRef<BattlepackSlot> m_slot; // 0x0 (0)
		CtrRef<UnlockAssetBase> m_guaranteedUnlock; // 0x8 (8)
		CtrRef<BattlepackBoostItem> m_guaranteedBoostItem; // 0x10 (16)
	}; // 0x18 (24)
}

