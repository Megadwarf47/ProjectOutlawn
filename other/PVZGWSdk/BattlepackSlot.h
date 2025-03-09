///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BattlepackRow.h>
#include <fb/String.h>

namespace fb {
	class BattlepackSlot : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlepackSlot"); }
		virtual ~BattlepackSlot() override {}
		BattlepackSlot() {
		};

		String m_label; // 0x18 (24)
		String m_description; // 0x20 (32)
		String m_key; // 0x28 (40)
		Array<BattlepackRow> m_rows; // 0x30 (48)
	}; // 0x38 (56)
}

