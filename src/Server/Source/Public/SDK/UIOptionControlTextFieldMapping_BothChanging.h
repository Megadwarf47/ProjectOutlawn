///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIOptionControlTextFieldMapping.h>

namespace fb {
	class UIOptionControlTextFieldMapping_BothChanging : public UIOptionControlTextFieldMapping {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionControlTextFieldMapping_BothChanging"); }
		virtual ~UIOptionControlTextFieldMapping_BothChanging() override {}
		UIOptionControlTextFieldMapping_BothChanging() {
		};

		Array<String> m_buttonOn1Text; // 0x18 (24)
		Array<String> m_buttonOn2Text; // 0x20 (32)
		Array<String> m_buttonOn3Text; // 0x28 (40)
		Array<String> m_buttonOn4Text; // 0x30 (48)
	}; // 0x38 (56)
}

