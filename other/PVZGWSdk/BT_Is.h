///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>

namespace fb {
	class BT_Is : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_Is"); }
		virtual ~BT_Is() override {}
		BT_Is() {
			m_result = true;
		};

		bool m_result; // 0x20 (32)
	}; // 0x28 (40)
}

