///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoSuicide : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoSuicide"); }
		virtual ~BT_DoSuicide() override {}
		BT_DoSuicide() {
			m_delay = 0.5f;
		};

		float m_delay; // 0x18 (24)
	}; // 0x20 (32)
}

