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
	class UISpecializationMetaData : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpecializationMetaData"); }
		virtual ~UISpecializationMetaData() override {}
		UISpecializationMetaData() {
		};

		String m_name; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_iconPath; // 0x38 (56)
		String m_imagePath; // 0x40 (64)
	}; // 0x48 (72)
}

