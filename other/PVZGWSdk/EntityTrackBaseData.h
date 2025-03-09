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
	class EntityTrackBaseData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityTrackBaseData"); }
		virtual ~EntityTrackBaseData() override {}
		EntityTrackBaseData() {
			m_identifier = 0;
			m_inheritedToChildConversationLines = false;
		};

		RefArray<TimelineTrackData> m_children; // 0x28 (40)
		s32 m_identifier; // 0x30 (48)
		bool m_inheritedToChildConversationLines; // 0x34 (52)
	}; // 0x38 (56)
}

