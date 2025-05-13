///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ANTBlendCurveType.h>
#include <fb/TimelineKeyframeData.h>

namespace fb {
	class ANTBlendKeyframe : public TimelineKeyframeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTBlendKeyframe"); }
		virtual ~ANTBlendKeyframe() override {}
		ANTBlendKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
			m_blendCurveType = ANTBlendCurveType::ANTBlendCurveType_SnapIn;
			m_blendScale = 1.f;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		ANTBlendCurveType m_blendCurveType; // 0x18 (24)
		float m_blendScale; // 0x1C (28)
	}; // 0x20 (32)
}

