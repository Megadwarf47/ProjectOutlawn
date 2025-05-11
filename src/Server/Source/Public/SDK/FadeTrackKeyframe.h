///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/FadeTrackKeyframeType.h>

namespace fb {
	class FadeTrackKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FadeTrackKeyframe"); }
		virtual ~FadeTrackKeyframe() override {}
		FadeTrackKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
			m_fadeType = FadeTrackKeyframeType::FadeTrackKeyframeType_FadeOut;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		FadeTrackKeyframeType m_fadeType; // 0x18 (24)
	}; // 0x20 (32)
}

