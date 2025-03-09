///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class MotionDampingData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MotionDampingData"); }
		virtual ~MotionDampingData() override {}
		MotionDampingData() {
			m_pitch = 0.f;
			m_yaw = 0.f;
			m_linearModifier = Vec3(1.f, 1.f, 1.f);
			m_roll = 0.f;
			m_linear = 0.f;
		};

		float m_pitch; // 0x10 (16)
		float m_yaw; // 0x14 (20)
		Vec3 m_linearModifier; // 0x20 (32)
		float m_roll; // 0x30 (48)
		float m_linear; // 0x34 (52)
	}; // 0x40 (64)
}

