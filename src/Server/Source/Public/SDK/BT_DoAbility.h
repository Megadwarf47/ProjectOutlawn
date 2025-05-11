///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/String.h>

namespace fb {
	class BT_DoAbility : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoAbility"); }
		virtual ~BT_DoAbility() override {}
		BT_DoAbility() {
			m_stage = 0;
			m_savePosition = false;
		};

		String m_ability; // 0x18 (24)
		s32 m_stage; // 0x20 (32)
		bool m_savePosition; // 0x24 (36)
	}; // 0x28 (40)
}

