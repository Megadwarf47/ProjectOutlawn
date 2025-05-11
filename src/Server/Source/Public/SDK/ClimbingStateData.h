///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class ClimbingStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClimbingStateData"); }
		virtual ~ClimbingStateData() override {}
		ClimbingStateData() {
			m_lateralInputScale = 0.3f;
			m_downAngleLimit = 35.f;
			m_dropOffAngle = 30.f;
			m_attractionVelocity = 0.1f;
			m_pushAwayVelocity = 3.f;
			m_climbHeightOffset = 0.f;
			m_climbOffVerticalDistance = 1.f;
			m_climbOffVerticalTime = 1.f;
			m_climbOffHorizontalDistance = 0.68f;
			m_climbOffHorizontalTime = 0.8f;
		};

		float m_lateralInputScale; // 0x18 (24)
		float m_downAngleLimit; // 0x1C (28)
		float m_dropOffAngle; // 0x20 (32)
		float m_attractionVelocity; // 0x24 (36)
		float m_pushAwayVelocity; // 0x28 (40)
		float m_climbHeightOffset; // 0x2C (44)
		float m_climbOffVerticalDistance; // 0x30 (48)
		float m_climbOffVerticalTime; // 0x34 (52)
		float m_climbOffHorizontalDistance; // 0x38 (56)
		float m_climbOffHorizontalTime; // 0x3C (60)
	}; // 0x40 (64)
}

