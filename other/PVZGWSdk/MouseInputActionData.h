///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AxesInputActionData.h>
#include <fb/InputDeviceMouseButtons.h>

namespace fb {
	class MouseInputActionData : public AxesInputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MouseInputActionData"); }
		virtual ~MouseInputActionData() override {}
		MouseInputActionData() {
			m_button = InputDeviceMouseButtons::IDB_Button_Undefined;
			m_simulateJoystickAxis = false;
			m_rememberExcessInput = false;
			m_scaleScrollWheelAxisInput = false;
		};

		InputDeviceMouseButtons m_button; // 0x20 (32)
		bool m_simulateJoystickAxis; // 0x24 (36)
		bool m_rememberExcessInput; // 0x25 (37)
		bool m_scaleScrollWheelAxisInput; // 0x26 (38)
	}; // 0x28 (40)
}

