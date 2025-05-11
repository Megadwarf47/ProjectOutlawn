///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputDeviceMessageEvent.h>
#include <fb/NuiSpeechPhrase.h>

namespace fb {
	class NuiSpeechInputActionPhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechInputActionPhrase"); }
		virtual ~NuiSpeechInputActionPhrase() override {}
		NuiSpeechInputActionPhrase() {
			m_event = InputDeviceMessageEvent::IDME_ThrowGrenade;
		};

		InputDeviceMessageEvent m_event; // 0x40 (64)
	}; // 0x48 (72)
}

