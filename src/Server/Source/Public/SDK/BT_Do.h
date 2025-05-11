///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_Do : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_Do"); }
		virtual ~BT_Do() override {}
		BT_Do() {
			m_result = true;
		};

		bool m_result; // 0x18 (24)
	}; // 0x20 (32)
}

