///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechPhrase.h>
#include <fb/ScreenActionInputEventType.h>

namespace fb {
	class NuiSpeechEntityPhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechEntityPhrase"); }
		virtual ~NuiSpeechEntityPhrase() override {}
		NuiSpeechEntityPhrase() {
			m_eventType = ScreenActionInputEventType::ScreenActionInputEventType_RuleRecognition;
			m_parameter = 0;
		};

		ScreenActionInputEventType m_eventType; // 0x40 (64)
		s32 m_parameter; // 0x44 (68)
	}; // 0x48 (72)
}

