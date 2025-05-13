///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ANTClipEndRule.h>
#include <fb/AntRef.h>
#include <fb/TimelineKeyframeData.h>

namespace fb {
	class ANTClipKeyframe : public TimelineKeyframeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTClipKeyframe"); }
		virtual ~ANTClipKeyframe() override {}
		ANTClipKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
			m_clipStartTrim = 0.f;
			m_clipEndTrim = 0.f;
			m_clipCycleStartOffset = 0.f;
			m_clipTimeScale = 1.f;
			m_clipEndRule = ANTClipEndRule::ANTClipEndRule_None;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		AntRef m_controller; // 0x18 (24)
		float m_clipStartTrim; // 0x2C (44)
		float m_clipEndTrim; // 0x30 (48)
		float m_clipCycleStartOffset; // 0x34 (52)
		float m_clipTimeScale; // 0x38 (56)
		ANTClipEndRule m_clipEndRule; // 0x3C (60)
	}; // 0x40 (64)
}

