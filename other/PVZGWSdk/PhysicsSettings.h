///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PhysicsSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsSettings"); }
		virtual ~PhysicsSettings() override {}
		PhysicsSettings() {
			m_clientEffectWorldThreadCount = 3;
			m_clientClothWorldThreadCount = 6;
			m_clientWorldThreadCount = 1;
			m_serverWorldThreadCount = 2;
			m_integrateJobCount = 2;
			m_collideJobCount = 4;
			m_clothJobCount = 2;
			m_windManagerAwakeningRadius = 20.f;
			m_clientWorldWorkerThreadCount = 0;
			m_serverWorldWorkerThreadCount = 0;
			m_effectWorldWorkerThreadCount = 4294967295;
			m_enable = true;
			m_enableClothInterpolationJobs = true;
			m_enableClothUpdateJob = true;
			m_enableAIRigidBody = true;
			m_forestEnable = true;
			m_enableJobs = true;
			m_removeRagdollWhenWoken = true;
			m_removeFromWorldOnCollisionOverflow = true;
			m_singleStepCharacter = true;
			m_forceSingleStepCharacterInSP = false;
			m_enableFollowWheelRaycasts = false;
			m_enableClientWheelRaycasts = true;
			m_enableASyncWheelRaycasts = true;
			m_useDelayedWakeUpClient = true;
			m_useDelayedWakeUpServer = false;
			m_suppressDebrisSpawnUntilReady = true;
			m_enablePlayerVSAICollisions = true;
		};

		u32 m_clientEffectWorldThreadCount; // 0x10 (16)
		u32 m_clientClothWorldThreadCount; // 0x14 (20)
		u32 m_clientWorldThreadCount; // 0x18 (24)
		u32 m_serverWorldThreadCount; // 0x1C (28)
		u32 m_integrateJobCount; // 0x20 (32)
		u32 m_collideJobCount; // 0x24 (36)
		u32 m_clothJobCount; // 0x28 (40)
		float m_windManagerAwakeningRadius; // 0x2C (44)
		u32 m_clientWorldWorkerThreadCount; // 0x30 (48)
		u32 m_serverWorldWorkerThreadCount; // 0x34 (52)
		u32 m_effectWorldWorkerThreadCount; // 0x38 (56)
		bool m_enable; // 0x3C (60)
		bool m_enableClothInterpolationJobs; // 0x3D (61)
		bool m_enableClothUpdateJob; // 0x3E (62)
		bool m_enableAIRigidBody; // 0x3F (63)
		bool m_forestEnable; // 0x40 (64)
		bool m_enableJobs; // 0x41 (65)
		bool m_removeRagdollWhenWoken; // 0x42 (66)
		bool m_removeFromWorldOnCollisionOverflow; // 0x43 (67)
		bool m_singleStepCharacter; // 0x44 (68)
		bool m_forceSingleStepCharacterInSP; // 0x45 (69)
		bool m_enableFollowWheelRaycasts; // 0x46 (70)
		bool m_enableClientWheelRaycasts; // 0x47 (71)
		bool m_enableASyncWheelRaycasts; // 0x48 (72)
		bool m_useDelayedWakeUpClient; // 0x49 (73)
		bool m_useDelayedWakeUpServer; // 0x4A (74)
		bool m_suppressDebrisSpawnUntilReady; // 0x4B (75)
		bool m_enablePlayerVSAICollisions; // 0x4C (76)
	}; // 0x50 (80)
}

