///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/ETauntType.h>

namespace fb {
	class BT_DoTaunt : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoTaunt"); }
		virtual ~BT_DoTaunt() override {}
		BT_DoTaunt() {
			m_taunt = ETauntType::ETaunt_Random;
			m_tauntInputRestricted = true;
		};

		ETauntType m_taunt; // 0x18 (24)
		bool m_tauntInputRestricted; // 0x1C (28)
	}; // 0x20 (32)
}

