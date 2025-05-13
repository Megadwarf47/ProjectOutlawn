///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class UICustomizationCategoryOrdering : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizationCategoryOrdering"); }
		virtual ~UICustomizationCategoryOrdering() override {}
		UICustomizationCategoryOrdering() {
		};

		String m_uiCategorySid; // 0x10 (16)
	}; // 0x18 (24)
}

