///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIDirectiveData.h>
#include <fb/PvzSpeedLevel.h>
#include <fb/RouteType.h>

namespace fb {
	class AIDirectiveFollowWaypointsData : public AIDirectiveData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDirectiveFollowWaypointsData"); }
		virtual ~AIDirectiveFollowWaypointsData() override {}
		AIDirectiveFollowWaypointsData() {
			m_typeOfRoute = RouteType::RouteStop;
			m_moveSpeed = PvzSpeedLevel::PvzSpeedLevel_Run;
			m_stopAtWaypoints = false;
			m_startAtGeometricallyClosestWaypoint = false;
		};

		RouteType m_typeOfRoute; // 0x20 (32)
		PvzSpeedLevel m_moveSpeed; // 0x24 (36)
		bool m_stopAtWaypoints; // 0x28 (40)
		bool m_startAtGeometricallyClosestWaypoint; // 0x29 (41)
	}; // 0x30 (48)
}

