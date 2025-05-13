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
	class UIImageDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIImageDescription"); }
		virtual ~UIImageDescription() override {}
		UIImageDescription() {
		};

		String m_identifier; // 0x28 (40)
		String m_name; // 0x30 (48)
		String m_texturePath; // 0x38 (56)
	}; // 0x40 (64)
}

