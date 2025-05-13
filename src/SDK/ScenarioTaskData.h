///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class PlayAnimationData;
}

namespace fb {
	struct ScenarioTaskData {
		ScenarioTaskData() {
			m_startPoint = Vec3(-44444.f, -44444.f, -44444.f);
			m_worldAngle = -44.f;
			m_scenarioId = -1;
			m_actorId = -1;
			m_partId = -1;
			m_levelId = -1;
			m_startTurnDistance = 1.5f;
			m_startTimerDistance = 0.35f;
			m_triggerScenarioDelay = 0.f;
			m_triggerScenario = true;
			m_useClientPosition = false;
			m_forceWaitForAnimation = false;
			m_overshootWaypoint = false;
		};

		Vec3 m_startPoint; // 0x0 (0)
		Vec3 m_endPointWorldOffset; // 0x10 (16)
		CtrRef<PlayAnimationData> m_playAnimation; // 0x20 (32)
		float m_worldAngle; // 0x28 (40)
		s32 m_scenarioId; // 0x2C (44)
		s32 m_actorId; // 0x30 (48)
		s32 m_partId; // 0x34 (52)
		s32 m_levelId; // 0x38 (56)
		Array<LinearTransform> m_connectTransforms; // 0x40 (64)
		float m_startTurnDistance; // 0x48 (72)
		float m_startTimerDistance; // 0x4C (76)
		float m_triggerScenarioDelay; // 0x50 (80)
		bool m_triggerScenario; // 0x54 (84)
		bool m_useClientPosition; // 0x55 (85)
		bool m_forceWaitForAnimation; // 0x56 (86)
		bool m_overshootWaypoint; // 0x57 (87)
	}; // 0x60 (96)
}

