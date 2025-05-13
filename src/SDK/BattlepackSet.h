///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BattlepackSetSlot.h>
#include <fb/RarenessLevel.h>
#include <fb/String.h>

namespace fb {
	class BattlepackSet : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackSet"); }
		virtual ~BattlepackSet() override {}
		BattlepackSet() {
			m_guaranteedRareness = RarenessLevel::RarenessLevel_Common;
			m_forceMinimalCharacter = false;
			m_preferDuplicateConsumableToFallbackLogic = false;
		};

		String m_key; // 0x18 (24)
		String m_label; // 0x20 (32)
		String m_description; // 0x28 (40)
		RarenessLevel m_guaranteedRareness; // 0x30 (48)
		Array<BattlepackSetSlot> m_slots; // 0x38 (56)
		bool m_forceMinimalCharacter; // 0x40 (64)
		bool m_preferDuplicateConsumableToFallbackLogic; // 0x41 (65)
	}; // 0x48 (72)
}

