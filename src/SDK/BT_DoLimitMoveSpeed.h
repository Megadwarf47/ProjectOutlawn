///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/PvzSpeedLevel.h>

namespace fb {
	class BT_DoLimitMoveSpeed : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoLimitMoveSpeed"); }
		virtual ~BT_DoLimitMoveSpeed() override {}
		BT_DoLimitMoveSpeed() {
			m_maxMoveSpeed = PvzSpeedLevel::PvzSpeedLevel_Sprint;
			m_minMoveSpeed = PvzSpeedLevel::PvzSpeedLevel_Idle;
		};

		PvzSpeedLevel m_maxMoveSpeed; // 0x18 (24)
		PvzSpeedLevel m_minMoveSpeed; // 0x1C (28)
	}; // 0x20 (32)
}

