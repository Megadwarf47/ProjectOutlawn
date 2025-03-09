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
	class BT_IsTimerReset : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsTimerReset"); }
		virtual ~BT_IsTimerReset() override {}
		BT_IsTimerReset() {
		};

		String m_timerName; // 0x20 (32)
	}; // 0x28 (40)
}

