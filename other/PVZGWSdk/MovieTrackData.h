///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GuideTrackData.h>
#include <fb/RefArray.h>

namespace fb {
	class MovieTrackKeyframe;
}

namespace fb {
	class MovieTrackData : public GuideTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovieTrackData"); }
		virtual ~MovieTrackData() override {}
		MovieTrackData() {

			m_guideTrackPriority = 2;
		};

		RefArray<MovieTrackKeyframe> m_keyframes; // 0x30 (48)
	}; // 0x38 (56)
}

