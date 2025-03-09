///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/ECompareRange.h>
#include <fb/EContext.h>
#include <fb/EIntVar.h>

namespace fb {
	class BT_IsIntVarRange : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsIntVarRange"); }
		virtual ~BT_IsIntVarRange() override {}
		BT_IsIntVarRange() {
			m_variable = EIntVar::EIntVar_AbilitiesCounter;
			m_context = EContext::EContext_Self;
			m_comparator = ECompareRange::ECompare_Inside;
			m_valueMin = 0;
			m_valueMax = 0;
			m_absolute = false;
		};

		EIntVar m_variable; // 0x20 (32)
		EContext m_context; // 0x24 (36)
		ECompareRange m_comparator; // 0x28 (40)
		s32 m_valueMin; // 0x2C (44)
		s32 m_valueMax; // 0x30 (48)
		bool m_absolute; // 0x34 (52)
	}; // 0x38 (56)
}

