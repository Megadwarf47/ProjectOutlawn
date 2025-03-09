///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class StabilizerData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StabilizerData"); }
		virtual ~StabilizerData() override {}
		StabilizerData() {
			m_pitchStrength = 0.f;
			m_rollStrength = 0.f;
			m_yawStrength = 0.f;
			m_verticalVelocityStrength = 0.f;
			m_advanced = false;
			m_advancedYaw = false;
		};

		float m_pitchStrength; // 0x10 (16)
		float m_rollStrength; // 0x14 (20)
		float m_yawStrength; // 0x18 (24)
		float m_verticalVelocityStrength; // 0x1C (28)
		bool m_advanced; // 0x20 (32)
		bool m_advancedYaw; // 0x21 (33)
	}; // 0x28 (40)
}

