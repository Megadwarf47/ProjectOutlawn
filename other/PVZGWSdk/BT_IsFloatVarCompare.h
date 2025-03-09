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
	class BT_IsFloatVarCompare : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsFloatVarCompare"); }
		virtual ~BT_IsFloatVarCompare() override {}
		BT_IsFloatVarCompare() {
			m_variable1 = EVar::EVar_Speed;
			m_context1 = EContext::EContext_Self;
			m_variable2 = EVar::EVar_Speed;
			m_context2 = EContext::EContext_Self;
			m_comparator = ECompare::Compare_Equal;
			m_delta = 0.f;
			m_absolute1 = false;
			m_absolute2 = false;
		};

		EVar m_variable1; // 0x20 (32)
		EContext m_context1; // 0x24 (36)
		EVar m_variable2; // 0x28 (40)
		EContext m_context2; // 0x2C (44)
		ECompare m_comparator; // 0x30 (48)
		float m_delta; // 0x34 (52)
		bool m_absolute1; // 0x38 (56)
		bool m_absolute2; // 0x39 (57)
	}; // 0x40 (64)
}

