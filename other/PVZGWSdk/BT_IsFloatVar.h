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
#include <fb/EVar.h>

namespace fb {
	class BT_IsFloatVar : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsFloatVar"); }
		virtual ~BT_IsFloatVar() override {}
		BT_IsFloatVar() {
			m_variable = EVar::EVar_Speed;
			m_context = EContext::EContext_Self;
			m_comparator = ECompare::Compare_Equal;
			m_value = 0.f;
			m_absolute = false;
		};

		EVar m_variable; // 0x20 (32)
		EContext m_context; // 0x24 (36)
		ECompare m_comparator; // 0x28 (40)
		float m_value; // 0x2C (44)
		bool m_absolute; // 0x30 (48)
	}; // 0x38 (56)
}

