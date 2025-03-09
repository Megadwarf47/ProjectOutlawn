///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIOptionControlTextFieldMapping.h>

namespace fb {
	class UIOptionControlTextFieldMapping_NonChanging : public UIOptionControlTextFieldMapping {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionControlTextFieldMapping_NonChanging"); }
		virtual ~UIOptionControlTextFieldMapping_NonChanging() override {}
		UIOptionControlTextFieldMapping_NonChanging() {
		};

		String m_text; // 0x18 (24)
	}; // 0x20 (32)
}

