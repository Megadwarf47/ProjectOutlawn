///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CameraSineCurveData.h>
#include <fb/TargetCameraData.h>
#include <fb/UavCameraPointData.h>

namespace fb {
	class UavCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UavCameraData"); }
		virtual ~UavCameraData() override {}
		UavCameraData() {
			m_viewDistance = 100.f;
			m_viewAngle = 15.f;
			m_rotationSpeed = 3.f;
			m_zoomFov = 6.f;
			m_zoomDelay = 3.f;
			m_zoomTransitionTime = 0.2f;
			m_fov = 18.f;
			m_upWeightDistance = 10.f;
		};

		float m_viewDistance; // 0xD0 (208)
		Array<CameraSineCurveData> m_viewDistanceCurve; // 0xD8 (216)
		float m_viewAngle; // 0xE0 (224)
		Array<CameraSineCurveData> m_viewAngleCurve; // 0xE8 (232)
		float m_rotationSpeed; // 0xF0 (240)
		Array<CameraSineCurveData> m_rotationSpeedCurve; // 0xF8 (248)
		float m_zoomFov; // 0x100 (256)
		float m_zoomDelay; // 0x104 (260)
		float m_zoomTransitionTime; // 0x108 (264)
		float m_fov; // 0x10C (268)
		UavCameraPointData m_focusPoint; // 0x110 (272)
		UavCameraPointData m_centerPoint; // 0x120 (288)
		float m_upWeightDistance; // 0x130 (304)
	}; // 0x140 (320)
}

