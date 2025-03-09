///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputActionData.h>
#include <fb/InputDeviceMessageEvent.h>

namespace fb {
	class MessageInputActionData : public InputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MessageInputActionData"); }
		virtual ~MessageInputActionData() override {}
		MessageInputActionData() {
			m_command = InputDeviceMessageEvent::IDME_Undefined;
		};

		InputDeviceMessageEvent m_command; // 0x18 (24)
	}; // 0x20 (32)
}

