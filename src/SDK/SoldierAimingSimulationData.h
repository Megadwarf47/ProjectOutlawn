///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingPoseData.h>
#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameDataContainer.h>
#include <fb/RefArray.h>
#include <fb/ZoomLevelSpecificTransitionTime.h>

namespace fb {
	class AimerModifierData;
	class SoldierAimAssistData;
	class ZoomLevelData;
}

namespace fb {
	class SoldierAimingSimulationData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierAimingSimulationData"); }
		virtual ~SoldierAimingSimulationData() override {}
		SoldierAimingSimulationData() {
			m_zoomTransitionTime = 0.2f;
			m_fovDelayTime = 0.f;
			m_fovTransitionTime = 0.15f;
			m_aimingRange = 100.f;
			m_lockAimToTargetSpeed = 180.f;
			m_returnToZoomAfterReload = true;
		};

		RefArray<ZoomLevelData> m_zoomLevels; // 0x10 (16)
		CtrRef<SoldierAimAssistData> m_aimAssist; // 0x18 (24)
		AimingPoseData m_standPose; // 0x20 (32)
		AimingPoseData m_crouchPose; // 0x38 (56)
		AimingPoseData m_pronePose; // 0x50 (80)
		float m_zoomTransitionTime; // 0x68 (104)
		Array<ZoomLevelSpecificTransitionTime> m_zoomTransitionTimeArray; // 0x70 (112)
		float m_fovDelayTime; // 0x78 (120)
		float m_fovTransitionTime; // 0x7C (124)
		float m_aimingRange; // 0x80 (128)
		float m_lockAimToTargetSpeed; // 0x84 (132)
		RefArray<AimerModifierData> m_modifiers; // 0x88 (136)
		bool m_returnToZoomAfterReload; // 0x90 (144)
	}; // 0x98 (152)
}

