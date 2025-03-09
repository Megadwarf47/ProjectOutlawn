///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoCharacterControl : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoCharacterControl"); }
		virtual ~BT_DoCharacterControl() override {}
		BT_DoCharacterControl() {
			m_visible = true;
			m_physics = true;
		};

		bool m_visible; // 0x18 (24)
		bool m_physics; // 0x19 (25)
	}; // 0x20 (32)
}

