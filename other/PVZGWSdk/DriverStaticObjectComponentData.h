///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DriverComponentData.h>

namespace fb {
	class DriverStaticObjectComponentData : public DriverComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DriverStaticObjectComponentData"); }
		virtual ~DriverStaticObjectComponentData() override {}
		DriverStaticObjectComponentData() {
			m_acceleration = 5.f;
			m_deceleration = 10.f;
			m_turningRadius = 7.f;
			m_turnWhileStill = false;
			m_alignWithGroundNormal = false;
		};

		float m_acceleration; // 0x80 (128)
		float m_deceleration; // 0x84 (132)
		float m_turningRadius; // 0x88 (136)
		bool m_turnWhileStill; // 0x8C (140)
		bool m_alignWithGroundNormal; // 0x8D (141)
	}; // 0x90 (144)
}

