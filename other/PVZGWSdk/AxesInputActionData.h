///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputActionData.h>
#include <fb/InputDeviceAxes.h>

namespace fb {
	class AxesInputActionData : public InputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AxesInputActionData"); }
		virtual ~AxesInputActionData() override {}
		AxesInputActionData() {
			m_axis = InputDeviceAxes::IDA_Undefined;
			m_normalizeInput = false;
		};

		InputDeviceAxes m_axis; // 0x18 (24)
		bool m_normalizeInput; // 0x1C (28)
	}; // 0x20 (32)
}

