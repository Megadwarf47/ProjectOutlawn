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
	class UIAiDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAiDescription"); }
		virtual ~UIAiDescription() override {}
		UIAiDescription() {
		};

		String m_name; // 0x28 (40)
		String m_namePlural; // 0x30 (48)
	}; // 0x38 (56)
}

