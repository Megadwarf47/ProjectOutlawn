///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AxesInputActionData.h>
#include <fb/InputDevicePOVs.h>
#include <fb/InputDevicePadButtons.h>

namespace fb {
	class PadInputActionData : public AxesInputActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PadInputActionData"); }
		virtual ~PadInputActionData() override {}
		PadInputActionData() {
			m_button = InputDevicePadButtons::IDB_Undefined;
			m_pS3AlternativeButton = InputDevicePadButtons::IDB_Undefined;
			m_pov = InputDevicePOVs::IDP_POV_Undefined;
			m_useSquareInput = false;
		};

		InputDevicePadButtons m_button; // 0x20 (32)
		InputDevicePadButtons m_pS3AlternativeButton; // 0x24 (36)
		InputDevicePOVs m_pov; // 0x28 (40)
		bool m_useSquareInput; // 0x2C (44)
	}; // 0x30 (48)
}

