///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTFunc.h>

namespace fb {
	class BTTaskFunc : public BTFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTTaskFunc"); }
		virtual ~BTTaskFunc() override {}
		BTTaskFunc() {
			m_funcType = EFuncType::EFuncType_Task;
		};

	}; // 0x18 (24)
}

