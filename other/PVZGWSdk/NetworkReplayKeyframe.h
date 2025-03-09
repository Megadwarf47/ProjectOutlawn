///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/TimelineKeyframeData.h>

namespace fb {
	class NetworkReplayKeyframe : public TimelineKeyframeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkReplayKeyframe"); }
		virtual ~NetworkReplayKeyframe() override {}
		NetworkReplayKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
			m_startTrim = 0.f;
			m_endTrim = 0.f;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		float m_startTrim; // 0x18 (24)
		float m_endTrim; // 0x1C (28)
		String m_captureName; // 0x20 (32)
	}; // 0x28 (40)
}

