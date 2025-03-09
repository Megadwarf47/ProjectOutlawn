///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/EBoolVar.h>
#include <fb/ECompare.h>
#include <fb/EContext.h>

namespace fb {
	class BT_IsBoolVar : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsBoolVar"); }
		virtual ~BT_IsBoolVar() override {}
		BT_IsBoolVar() {
			m_variable = EBoolVar::EBoolVar_AttackTargetValid;
			m_context = EContext::EContext_Self;
			m_comparator = ECompare::Compare_Equal;
			m_value = true;
		};

		EBoolVar m_variable; // 0x20 (32)
		EContext m_context; // 0x24 (36)
		ECompare m_comparator; // 0x28 (40)
		bool m_value; // 0x2C (44)
	}; // 0x30 (48)
}

