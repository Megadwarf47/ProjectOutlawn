///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoSetAbilityCounter : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoSetAbilityCounter"); }
		virtual ~BT_DoSetAbilityCounter() override {}
		BT_DoSetAbilityCounter() {
			m_counter = 0;
		};

		s32 m_counter; // 0x18 (24)
	}; // 0x20 (32)
}

