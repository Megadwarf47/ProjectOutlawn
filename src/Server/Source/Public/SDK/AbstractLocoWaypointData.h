///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AILocoBaseTaskData.h>
#include <fb/WaypointData.h>

namespace fb {
	class AbstractLocoWaypointData : public WaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AbstractLocoWaypointData"); }
		virtual ~AbstractLocoWaypointData() override {}
		AbstractLocoWaypointData() {
		};

		AILocoBaseTaskData m_baseTask; // 0x20 (32)
	}; // 0x40 (64)
}

