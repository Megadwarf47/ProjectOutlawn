///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TimelineTrackData.h>

namespace fb {
	class GuideTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GuideTrackData"); }
		virtual ~GuideTrackData() override {}
		GuideTrackData() {
			m_guideTrackPriority = -1;
		};

		s32 m_guideTrackPriority; // 0x28 (40)
	}; // 0x30 (48)
}

