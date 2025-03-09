///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/String.h>

namespace fb {
	class BT_IsAbilityActive : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsAbilityActive"); }
		virtual ~BT_IsAbilityActive() override {}
		BT_IsAbilityActive() {
		};

		String m_ability; // 0x20 (32)
	}; // 0x28 (40)
}

