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
	class ANTBlendKeyframe;
}

namespace fb {
	class ANTBlendKeyframeTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTBlendKeyframeTrackData"); }
		virtual ~ANTBlendKeyframeTrackData() override {}
		ANTBlendKeyframeTrackData() {
		};

		RefArray<ANTBlendKeyframe> m_keyframes; // 0x28 (40)
	}; // 0x30 (48)
}

