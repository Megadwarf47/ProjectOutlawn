///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AILocoCoverTaskData.h>
#include <fb/AbstractLocoWaypointData.h>

namespace fb {
	class CoverWaypointData : public AbstractLocoWaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CoverWaypointData"); }
		virtual ~CoverWaypointData() override {}
		CoverWaypointData() {
		};

		AILocoCoverTaskData m_coverTask; // 0x40 (64)
	}; // 0xA0 (160)
}

