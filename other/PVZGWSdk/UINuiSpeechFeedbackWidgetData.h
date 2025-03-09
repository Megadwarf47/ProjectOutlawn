///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UINuiSpeechFeedbackWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINuiSpeechFeedbackWidgetData"); }
		virtual ~UINuiSpeechFeedbackWidgetData() override {}
		UINuiSpeechFeedbackWidgetData() {
			m_stayDuration = 3.f;
			m_fadeOutDuration = 2.f;
		};

		float m_stayDuration; // 0x68 (104)
		float m_fadeOutDuration; // 0x6C (108)
		String m_successIcon; // 0x70 (112)
		String m_failedIcon; // 0x78 (120)
	}; // 0x80 (128)
}

