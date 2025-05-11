///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/EFuncType.h>

namespace fb {
	class BTFunc : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTFunc"); }
		virtual ~BTFunc() override {}
		BTFunc() {
			m_funcType = EFuncType::EFuncType_Base;
		};

		EFuncType m_funcType; // 0x10 (16)
	}; // 0x18 (24)
}

