///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntCoverEnum.h>
#include <fb/AntPoseEnum.h>
#include <fb/CoverEnterStrategy.h>
#include <fb/CoverExitStyle.h>
#include <fb/CoverFireType.h>
#include <fb/CoverIdleType.h>
#include <fb/CoverPeekType.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct AILocoCoverTaskData {
		AILocoCoverTaskData() {
			m_wantedPos = Vec3(-44444.f, -44444.f, -44444.f);
			m_coverType = AntCoverEnum::AntCoverEnum_RightCover;
			m_coverPose = AntPoseEnum::AntPoseEnum_Stand;
			m_waitTime = -1.f;
			m_worldAngle = 0.f;
			m_peekOut = CoverPeekType::CoverPeekType_None;
			m_idleBehavior = CoverIdleType::CoverIdleType_Calm;
			m_exitPose = AntPoseEnum::AntPoseEnum_NoChange;
			m_offsetLength = 2.f;
			m_enterStrategy = CoverEnterStrategy::CoverEnterStrategy_EnterNormally;
			m_exitAngle = -44.f;
			m_distanceToNextWaypoint = 0.f;
			m_alignOffsetAlong = 0.5f;
			m_alignOffsetPerpendicular = 0.3f;
			m_exitStyle = CoverExitStyle::CoverExitStyle_ExitCover;
			m_prepareFireType = CoverFireType::CoverFireType_NoFire;
			m_forceExitCover = false;
			m_useClientPosition = false;
		};

		Vec3 m_wantedPos; // 0x0 (0)
		Vec3 m_threatPosition; // 0x10 (16)
		AntCoverEnum m_coverType; // 0x20 (32)
		AntPoseEnum m_coverPose; // 0x24 (36)
		float m_waitTime; // 0x28 (40)
		float m_worldAngle; // 0x2C (44)
		CoverPeekType m_peekOut; // 0x30 (48)
		CoverIdleType m_idleBehavior; // 0x34 (52)
		AntPoseEnum m_exitPose; // 0x38 (56)
		float m_offsetLength; // 0x3C (60)
		CoverEnterStrategy m_enterStrategy; // 0x40 (64)
		float m_exitAngle; // 0x44 (68)
		float m_distanceToNextWaypoint; // 0x48 (72)
		float m_alignOffsetAlong; // 0x4C (76)
		float m_alignOffsetPerpendicular; // 0x50 (80)
		CoverExitStyle m_exitStyle; // 0x54 (84)
		CoverFireType m_prepareFireType; // 0x58 (88)
		bool m_forceExitCover; // 0x5C (92)
		bool m_useClientPosition; // 0x5D (93)
	}; // 0x60 (96)
}

