///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechFocusPointAction.h>
#include <fb/NuiSpeechPhrase.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechFocusPointPhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechFocusPointPhrase"); }
		virtual ~NuiSpeechFocusPointPhrase() override {}
		NuiSpeechFocusPointPhrase() {
			m_action = NuiSpeechFocusPointAction::NuiSpeechFocusPointAction_Attack;
		};

		NuiSpeechFocusPointAction m_action; // 0x40 (64)
		String m_focusPointName; // 0x48 (72)
	}; // 0x50 (80)
}

