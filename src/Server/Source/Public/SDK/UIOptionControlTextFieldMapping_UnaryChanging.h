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
	class UIOptionControlTextFieldMapping_UnaryChanging : public UIOptionControlTextFieldMapping {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionControlTextFieldMapping_UnaryChanging"); }
		virtual ~UIOptionControlTextFieldMapping_UnaryChanging() override {}
		UIOptionControlTextFieldMapping_UnaryChanging() {
			m_changedBySticks = false;
		};

		Array<String> m_text; // 0x18 (24)
		bool m_changedBySticks; // 0x20 (32)
	}; // 0x28 (40)
}

