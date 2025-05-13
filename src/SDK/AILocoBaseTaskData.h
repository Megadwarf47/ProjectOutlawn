///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntAttentionStateEnum.h>
#include <fb/AntPoseEnum.h>
#include <fb/AntSpeedLevel.h>
#include <fb/Types.h>

namespace fb {
	struct AILocoBaseTaskData {
		AILocoBaseTaskData() {
			m_poseChangeMovingTowards = AntPoseEnum::AntPoseEnum_NoChange;
			m_attentionChangeMovingTowards = AntAttentionStateEnum::AntAttentionStateEnum_NoChange;
			m_speedChangeMovingTowards = AntSpeedLevel::AntSpeedLevel_NoChange;
			m_poseChange = AntPoseEnum::AntPoseEnum_NoChange;
			m_attentionStateChange = AntAttentionStateEnum::AntAttentionStateEnum_NoChange;
			m_speedLevelChange = AntSpeedLevel::AntSpeedLevel_NoChange;
			m_radius = 1.f;
			m_isScripted = false;
		};

		AntPoseEnum m_poseChangeMovingTowards; // 0x0 (0)
		AntAttentionStateEnum m_attentionChangeMovingTowards; // 0x4 (4)
		AntSpeedLevel m_speedChangeMovingTowards; // 0x8 (8)
		AntPoseEnum m_poseChange; // 0xC (12)
		AntAttentionStateEnum m_attentionStateChange; // 0x10 (16)
		AntSpeedLevel m_speedLevelChange; // 0x14 (20)
		float m_radius; // 0x18 (24)
		bool m_isScripted; // 0x1C (28)
	}; // 0x20 (32)
}

