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
	class UICustomizationDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizationDescription"); }
		virtual ~UICustomizationDescription() override {}
		UICustomizationDescription() {
		};

		String m_name; // 0x28 (40)
		String m_namePlural; // 0x30 (48)
	}; // 0x38 (56)
}

