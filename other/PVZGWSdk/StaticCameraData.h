///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RefArray.h>
#include <fb/TargetCameraData.h>
#include <fb/Vec3.h>

namespace fb {
	class CameraLoosePartPhysicsData;
}

namespace fb {
	class StaticCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticCameraData"); }
		virtual ~StaticCameraData() override {}
		StaticCameraData() {
			m_leftYawAngle = 0.f;
			m_rightYawAngle = 0.f;
			m_upPitchAngle = 0.f;
			m_downPitchAngle = 0.f;
			m_averageFilterFrames = 10;
			m_yawInputAction = 1018573301;
			m_pitchInputAction = -754024050;
			m_worldSpaceLockEfficiencyYaw = 0.f;
			m_worldSpaceLockEfficiencyPitch = 0.f;
			m_yawSensitivityNonZoomed = 0.f;
			m_yawSensitivityZoomed = 0.f;
			m_pitchSensitivityNonZoomed = 0.f;
			m_pitchSensitivityZoomed = 0.f;
			m_mergeLeftAndRightCurves = false;
			m_mergeUpAndDownCurves = false;
			m_mirrorHorizontalCurves = false;
			m_mirrorVerticalCurves = false;
			m_accumulateInput = true;
			m_resetAccumulatedInputOnViewChange = true;
		};

		Array<Vec3> m_leftCurve; // 0xD0 (208)
		Array<Vec3> m_rightCurve; // 0xD8 (216)
		Array<Vec3> m_upCurve; // 0xE0 (224)
		Array<Vec3> m_downCurve; // 0xE8 (232)
		RefArray<CameraLoosePartPhysicsData> m_loosePartPhysics; // 0xF0 (240)
		float m_leftYawAngle; // 0xF8 (248)
		float m_rightYawAngle; // 0xFC (252)
		float m_upPitchAngle; // 0x100 (256)
		float m_downPitchAngle; // 0x104 (260)
		s32 m_averageFilterFrames; // 0x108 (264)
		s32 m_yawInputAction; // 0x10C (268)
		s32 m_pitchInputAction; // 0x110 (272)
		float m_worldSpaceLockEfficiencyYaw; // 0x114 (276)
		float m_worldSpaceLockEfficiencyPitch; // 0x118 (280)
		float m_yawSensitivityNonZoomed; // 0x11C (284)
		float m_yawSensitivityZoomed; // 0x120 (288)
		float m_pitchSensitivityNonZoomed; // 0x124 (292)
		float m_pitchSensitivityZoomed; // 0x128 (296)
		bool m_mergeLeftAndRightCurves; // 0x12C (300)
		bool m_mergeUpAndDownCurves; // 0x12D (301)
		bool m_mirrorHorizontalCurves; // 0x12E (302)
		bool m_mirrorVerticalCurves; // 0x12F (303)
		bool m_accumulateInput; // 0x130 (304)
		bool m_resetAccumulatedInputOnViewChange; // 0x131 (305)
	}; // 0x140 (320)
}

