///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/TimelineTrackData.h>

namespace fb {
	class CameraDirectorKeyframe;
	class CameraTrackBaseData;
	class TimelineTrackData;
}

namespace fb {
	class CameraDirectorTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraDirectorTrackData"); }
		virtual ~CameraDirectorTrackData() override {}
		CameraDirectorTrackData() {
		};

		RefArray<CameraDirectorKeyframe> m_keyframes; // 0x28 (40)
		RefArray<TimelineTrackData> m_children; // 0x30 (48)
		CtrRef<CameraTrackBaseData> m_postTimelineCamera; // 0x38 (56)
	}; // 0x40 (64)
}

