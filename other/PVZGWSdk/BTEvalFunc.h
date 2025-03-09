///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTFunc.h>

namespace fb {
	class BTEvalFunc : public BTFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTEvalFunc"); }
		virtual ~BTEvalFunc() override {}
		BTEvalFunc() {
			m_inverted = false;

			m_funcType = EFuncType::EFuncType_Eval;
		};

		bool m_inverted; // 0x18 (24)
	}; // 0x20 (32)
}

