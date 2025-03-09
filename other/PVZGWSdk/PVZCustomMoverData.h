///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CustomMoverData.h>

namespace fb {
	class PVZCustomMoverData : public CustomMoverData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCustomMoverData"); }
		virtual ~PVZCustomMoverData() override {}
		PVZCustomMoverData() {
			m_maxSpeed = 6.5f;
			m_sprintSpeedPct = 1.f;
			m_runSpeedPct = 0.6f;
			m_walkSpeedPct = 0.3f;
		};

		float m_maxSpeed; // 0x10 (16)
		float m_sprintSpeedPct; // 0x14 (20)
		float m_runSpeedPct; // 0x18 (24)
		float m_walkSpeedPct; // 0x1C (28)
	}; // 0x20 (32)
}

