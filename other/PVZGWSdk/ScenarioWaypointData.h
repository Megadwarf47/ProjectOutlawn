///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractLocoWaypointData.h>
#include <fb/AntRef.h>
#include <fb/CtrRef.h>
#include <fb/ScenarioTaskData.h>

namespace fb {
	class PlayAnimationData;
}

namespace fb {
	class ScenarioWaypointData : public AbstractLocoWaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScenarioWaypointData"); }
		virtual ~ScenarioWaypointData() override {}
		ScenarioWaypointData() {
		};

		CtrRef<PlayAnimationData> m_playAnimation; // 0x40 (64)
		AntRef m_scenarioAntRef; // 0x48 (72)
		ScenarioTaskData m_scenarioTask; // 0x60 (96)
	}; // 0xC0 (192)
}

