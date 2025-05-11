///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalPlayerIndex.h>
#include <fb/RefArray.h>
#include <fb/TimelineTrackData.h>

namespace fb {
	class FadeTrackKeyframe;
}

namespace fb {
	class FadeTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FadeTrackData"); }
		virtual ~FadeTrackData() override {}
		FadeTrackData() {
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_0;
			m_fadeScreen = true;
			m_fadeUI = false;
			m_fadeAudio = false;
			m_fadeMovie = false;
			m_fadeRumble = false;
		};

		RefArray<FadeTrackKeyframe> m_keyframes; // 0x28 (40)
		LocalPlayerIndex m_localPlayerIndex; // 0x30 (48)
		bool m_fadeScreen; // 0x34 (52)
		bool m_fadeUI; // 0x35 (53)
		bool m_fadeAudio; // 0x36 (54)
		bool m_fadeMovie; // 0x37 (55)
		bool m_fadeRumble; // 0x38 (56)
	}; // 0x40 (64)
}

