///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ChaseCameraData.h>

namespace fb {
	class ControllableChaseCameraData : public ChaseCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ControllableChaseCameraData"); }
		virtual ~ControllableChaseCameraData() override {}
		ControllableChaseCameraData() {
			m_rotateSpeedMultiplier = 2.f;
			m_rotateMinUpDown = -0.8f;
			m_rotateMaxUpDown = 0.2f;
			m_useTargetRelativePitch = false;
		};

		float m_rotateSpeedMultiplier; // 0x150 (336)
		float m_rotateMinUpDown; // 0x154 (340)
		float m_rotateMaxUpDown; // 0x158 (344)
		bool m_useTargetRelativePitch; // 0x15C (348)
	}; // 0x160 (352)
}

