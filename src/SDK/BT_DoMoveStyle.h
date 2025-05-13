///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/EMove.h>
#include <fb/OrientMode.h>
#include <fb/PointOfInterestType.h>

namespace fb {
	class BT_DoMoveStyle : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoMoveStyle"); }
		virtual ~BT_DoMoveStyle() override {}
		BT_DoMoveStyle() {
			m_moveStyle = EMove::EMove_Stop;
			m_orientation = OrientMode::ORIENT_NONE;
			m_interest = PointOfInterestType::PointOfInterest_None;
			m_additionalRadius = 0.f;
		};

		EMove m_moveStyle; // 0x18 (24)
		OrientMode m_orientation; // 0x1C (28)
		PointOfInterestType m_interest; // 0x20 (32)
		float m_additionalRadius; // 0x24 (36)
	}; // 0x28 (40)
}

