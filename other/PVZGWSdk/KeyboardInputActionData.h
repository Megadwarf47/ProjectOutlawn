///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputActionData.h>
#include <fb/InputDeviceKeys.h>

namespace fb {
	class KeyboardInputActionData : public InputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KeyboardInputActionData"); }
		virtual ~KeyboardInputActionData() override {}
		KeyboardInputActionData() {
			m_key = InputDeviceKeys::IDK_Undefined;
		};

		InputDeviceKeys m_key; // 0x18 (24)
	}; // 0x20 (32)
}

