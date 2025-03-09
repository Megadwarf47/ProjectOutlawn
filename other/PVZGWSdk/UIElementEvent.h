///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIElementTrigger.h>

namespace fb {
	class UIElementEvent : public UIElementTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementEvent"); }
		virtual ~UIElementEvent() override {}
		UIElementEvent() {
		};

		String m_event; // 0x10 (16)
	}; // 0x18 (24)
}

