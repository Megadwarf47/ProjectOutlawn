///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AntSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntSettings"); }
		virtual ~AntSettings() override {}
		AntSettings() {
			m_forceLodDistance = -1.f;
			m_maxAnimatablesPerPoseJob = -1;
			m_reducedInterpolationDistance = 0.f;
			m_trajectoryInterpolationDistance = 0.f;
			m_maxInterpolationSlots = 32;
			m_maxSingleBoneInterpolationSlots = 10;
			m_checkGiantSoldiers = 0.f;
			m_leanSignalScale = 0.2f;
			m_leanSignalClamp = 7.f;
			m_detailedCollisionSpeedLimit = 3.f;
			m_maxInterpolationDistance = 10.f;
			m_maxInterpolationTicks = 10;
			m_autoCullPixelSize = 0;
			m_usePA = false;
			m_useHIK = true;
			m_blockOnJobs = true;
			m_interpolatePoses = false;
			m_allowVariableTickLength = false;
			m_useWeaponFov = false;
			m_forcePoseUpdate = false;
			m_useCameraFov = false;
			m_enablePA = false;
			m_clientEmulatesServer = false;
			m_updateEnable = true;
			m_enablePackageCache = true;
			m_enableDebugLogFile = false;
			m_enablePoseJobs = true;
			m_disableAILodFeature = true;
			m_disableModelAnimationCulling = false;
			m_enableJobs = false;
			m_runAsHighPriority = true;
			m_updateLoddingEnable = true;
		};

		float m_forceLodDistance; // 0x10 (16)
		s32 m_maxAnimatablesPerPoseJob; // 0x14 (20)
		float m_reducedInterpolationDistance; // 0x18 (24)
		float m_trajectoryInterpolationDistance; // 0x1C (28)
		s32 m_maxInterpolationSlots; // 0x20 (32)
		s32 m_maxSingleBoneInterpolationSlots; // 0x24 (36)
		float m_checkGiantSoldiers; // 0x28 (40)
		float m_leanSignalScale; // 0x2C (44)
		float m_leanSignalClamp; // 0x30 (48)
		float m_detailedCollisionSpeedLimit; // 0x34 (52)
		float m_maxInterpolationDistance; // 0x38 (56)
		s32 m_maxInterpolationTicks; // 0x3C (60)
		s32 m_autoCullPixelSize; // 0x40 (64)
		bool m_usePA; // 0x44 (68)
		bool m_useHIK; // 0x45 (69)
		bool m_blockOnJobs; // 0x46 (70)
		bool m_interpolatePoses; // 0x47 (71)
		bool m_allowVariableTickLength; // 0x48 (72)
		bool m_useWeaponFov; // 0x49 (73)
		bool m_forcePoseUpdate; // 0x4A (74)
		bool m_useCameraFov; // 0x4B (75)
		bool m_enablePA; // 0x4C (76)
		bool m_clientEmulatesServer; // 0x4D (77)
		bool m_updateEnable; // 0x4E (78)
		bool m_enablePackageCache; // 0x4F (79)
		bool m_enableDebugLogFile; // 0x50 (80)
		bool m_enablePoseJobs; // 0x51 (81)
		bool m_disableAILodFeature; // 0x52 (82)
		bool m_disableModelAnimationCulling; // 0x53 (83)
		bool m_enableJobs; // 0x54 (84)
		bool m_runAsHighPriority; // 0x55 (85)
		bool m_updateLoddingEnable; // 0x56 (86)
	}; // 0x58 (88)
}

