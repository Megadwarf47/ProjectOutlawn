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
	class BT_DoMoveSpeed : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoMoveSpeed"); }
		virtual ~BT_DoMoveSpeed() override {}
		BT_DoMoveSpeed() {
			m_moveSpeed = PvzSpeedLevel::PvzSpeedLevel_Idle;
		};

		PvzSpeedLevel m_moveSpeed; // 0x18 (24)
	}; // 0x20 (32)
}

