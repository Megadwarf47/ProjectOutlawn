///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIModDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIModDescription"); }
		virtual ~UIModDescription() override {}
		UIModDescription() {
		};

		String m_identifier; // 0x28 (40)
		String m_shortName; // 0x30 (48)
		String m_fullName; // 0x38 (56)
		String m_desc; // 0x40 (64)
		String m_iconPath; // 0x48 (72)
	}; // 0x50 (80)
}

