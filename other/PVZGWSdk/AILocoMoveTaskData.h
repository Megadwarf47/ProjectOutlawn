///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntPoseEnum.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct AILocoMoveTaskData {
		AILocoMoveTaskData() {
			m_wantedPos = Vec3(-44444.f, -44444.f, -44444.f);
			m_waitTime = 0.f;
			m_worldAngle = -44.f;
			m_enterPose = AntPoseEnum::AntPoseEnum_NoChange;
			m_exitPose = AntPoseEnum::AntPoseEnum_NoChange;
			m_almostFinishedDistance = 5.2f;
			m_overrideAngle = false;
			m_useClientPosition = false;
			m_onlySignalAlmostFinishedWhenMovingTowardsWaypoint = false;
		};

		Vec3 m_wantedPos; // 0x0 (0)
		float m_waitTime; // 0x10 (16)
		float m_worldAngle; // 0x14 (20)
		AntPoseEnum m_enterPose; // 0x18 (24)
		AntPoseEnum m_exitPose; // 0x1C (28)
		float m_almostFinishedDistance; // 0x20 (32)
		bool m_overrideAngle; // 0x24 (36)
		bool m_useClientPosition; // 0x25 (37)
		bool m_onlySignalAlmostFinishedWhenMovingTowardsWaypoint; // 0x26 (38)
	}; // 0x30 (48)
}

