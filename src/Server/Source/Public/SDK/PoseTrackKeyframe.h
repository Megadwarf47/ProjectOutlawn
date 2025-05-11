///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/TimelineKeyframeData.h>

namespace fb {
	class PoseDefinition;
	class PoseTransitionBase;
}

namespace fb {
	class PoseTrackKeyframe : public TimelineKeyframeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PoseTrackKeyframe"); }
		virtual ~PoseTrackKeyframe() override {}
		PoseTrackKeyframe() {
			m_time = 0.f;
			m_durationOverride = 0.f;
		};

		float m_time; // 0x10 (16)
		CtrRef<PoseDefinition> m_transitionTo; // 0x18 (24)
		float m_durationOverride; // 0x20 (32)
		CtrRef<PoseTransitionBase> m_transitionOverride; // 0x28 (40)
	}; // 0x30 (48)
}

