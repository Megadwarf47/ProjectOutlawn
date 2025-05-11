///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AxesInputActionData.h>
#include <fb/InputDeviceMotionControllerButtons.h>

namespace fb {
	class MotionControllerInputActionData : public AxesInputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MotionControllerInputActionData"); }
		virtual ~MotionControllerInputActionData() override {}
		MotionControllerInputActionData() {
			m_button = InputDeviceMotionControllerButtons::IDMCB_Undefined;
		};

		InputDeviceMotionControllerButtons m_button; // 0x20 (32)
	}; // 0x28 (40)
}

