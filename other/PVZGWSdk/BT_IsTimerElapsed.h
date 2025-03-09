///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/String.h>

namespace fb {
	class BT_IsTimerElapsed : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsTimerElapsed"); }
		virtual ~BT_IsTimerElapsed() override {}
		BT_IsTimerElapsed() {
		};

		String m_timerName; // 0x20 (32)
	}; // 0x28 (40)
}

