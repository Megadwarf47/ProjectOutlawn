///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class TurnInPlaceTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TurnInPlaceTune"); }
		virtual ~TurnInPlaceTune() override {}
		TurnInPlaceTune() {
			m_whenMovingAngle = 180.f;
			m_whenStoppedAngle = 180.f;
			m_speed = 360.f;
			m_slideSpinThreshold = 0.25f;
			m_accelAngle = 0.f;
			m_enableUTurn = false;
		};

		float m_whenMovingAngle; // 0x18 (24)
		float m_whenStoppedAngle; // 0x1C (28)
		float m_speed; // 0x20 (32)
		float m_slideSpinThreshold; // 0x24 (36)
		float m_accelAngle; // 0x28 (40)
		bool m_enableUTurn; // 0x2C (44)
	}; // 0x30 (48)
}

