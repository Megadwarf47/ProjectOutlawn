///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RouteType.h>

namespace fb {
	class FollowWaypointsEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FollowWaypointsEntityData"); }
		virtual ~FollowWaypointsEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		FollowWaypointsEntityData() {
			m_typeOfRoute = RouteType::RouteStop;
			m_usePathFinding = false;
			m_startAtGeometricallyClosestWaypoint = false;
		};

		RouteType m_typeOfRoute; // 0x18 (24)
		bool m_usePathFinding; // 0x1C (28)
		bool m_startAtGeometricallyClosestWaypoint; // 0x1D (29)
	}; // 0x20 (32)
}

