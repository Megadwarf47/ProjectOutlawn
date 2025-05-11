///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AILocoMoveTaskData.h>
#include <fb/AbstractLocoWaypointData.h>

namespace fb {
	class StandardMoveWaypointData : public AbstractLocoWaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StandardMoveWaypointData"); }
		virtual ~StandardMoveWaypointData() override {}
		StandardMoveWaypointData() {
		};

		AILocoMoveTaskData m_moveTask; // 0x40 (64)
	}; // 0x70 (112)
}

