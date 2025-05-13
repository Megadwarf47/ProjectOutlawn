///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoSpecialWeaponsState : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoSpecialWeaponsState"); }
		virtual ~BT_DoSpecialWeaponsState() override {}
		BT_DoSpecialWeaponsState() {
			m_enabled = true;
		};

		bool m_enabled; // 0x18 (24)
	}; // 0x20 (32)
}

