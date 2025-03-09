///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/TimelineTrackData.h>

namespace fb {
	class TimelineTrackData;
}

namespace fb {
	class GroupTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroupTrackData"); }
		virtual ~GroupTrackData() override {}
		GroupTrackData() {
		};

		RefArray<TimelineTrackData> m_children; // 0x28 (40)
	}; // 0x30 (48)
}

