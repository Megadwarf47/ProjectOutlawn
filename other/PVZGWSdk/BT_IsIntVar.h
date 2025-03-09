///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/ECompare.h>
#include <fb/EContext.h>
#include <fb/EIntVar.h>

namespace fb {
	class BT_IsIntVar : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsIntVar"); }
		virtual ~BT_IsIntVar() override {}
		BT_IsIntVar() {
			m_variable = EIntVar::EIntVar_AbilitiesCounter;
			m_context = EContext::EContext_Self;
			m_comparator = ECompare::Compare_Equal;
			m_value = 0;
			m_absolute = false;
		};

		EIntVar m_variable; // 0x20 (32)
		EContext m_context; // 0x24 (36)
		ECompare m_comparator; // 0x28 (40)
		s32 m_value; // 0x2C (44)
		bool m_absolute; // 0x30 (48)
	}; // 0x38 (56)
}

