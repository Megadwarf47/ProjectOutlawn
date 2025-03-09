///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CameraRelativeControlEnum.h>
#include <fb/CameraRelativeControlPerSpeedData.h>
#include <fb/DataContainer.h>

namespace fb {
	class CameraRelativeControlData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraRelativeControlData"); }
		virtual ~CameraRelativeControlData() override {}
		CameraRelativeControlData() {
			m_cameraRelativeControl = CameraRelativeControlEnum::UseProfileOptions;
			m_cameraRelativeControl_Forward = -442021152;
			m_cameraRelativeControl_Back = -765325833;
			m_cameraRelativeControl_Strafe = -1921408025;
			m_forcedMovingBodyWorldSpaceLock = 1018573301;
			m_throttleOutput = -442021152;
			m_brakeOutput = -765325833;
			m_yawOutput = -1921408025;
			m_combineWithNonRelativeControls = false;
			m_useCameraComponentTransform = true;
			m_vehicleRelativeForward = false;
			m_vehicleRelativeStrafe = false;
			m_invertedYawInReverse = true;
		};

		CameraRelativeControlEnum m_cameraRelativeControl; // 0x10 (16)
		s32 m_cameraRelativeControl_Forward; // 0x14 (20)
		s32 m_cameraRelativeControl_Back; // 0x18 (24)
		s32 m_cameraRelativeControl_Strafe; // 0x1C (28)
		s32 m_forcedMovingBodyWorldSpaceLock; // 0x20 (32)
		Array<CameraRelativeControlPerSpeedData> m_speedRelativeData; // 0x28 (40)
		s32 m_throttleOutput; // 0x30 (48)
		s32 m_brakeOutput; // 0x34 (52)
		s32 m_yawOutput; // 0x38 (56)
		bool m_combineWithNonRelativeControls; // 0x3C (60)
		bool m_useCameraComponentTransform; // 0x3D (61)
		bool m_vehicleRelativeForward; // 0x3E (62)
		bool m_vehicleRelativeStrafe; // 0x3F (63)
		bool m_invertedYawInReverse; // 0x40 (64)
	}; // 0x48 (72)
}

