///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/String.h>

namespace fb {
	class BT_DoSetTimer : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoSetTimer"); }
		virtual ~BT_DoSetTimer() override {}
		BT_DoSetTimer() {
			m_time = -1.f;
			m_randomExtraTime = 0.f;
			m_reset = false;
			m_random = false;
		};

		String m_timerName; // 0x18 (24)
		float m_time; // 0x20 (32)
		float m_randomExtraTime; // 0x24 (36)
		bool m_reset; // 0x28 (40)
		bool m_random; // 0x29 (41)
	}; // 0x30 (48)
}

