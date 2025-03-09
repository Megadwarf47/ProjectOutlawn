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
	class PS3StoreImageSD : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PS3StoreImageSD"); }
		virtual ~PS3StoreImageSD() override {}
		PS3StoreImageSD() {
		};

		String m_identifier; // 0x28 (40)
		String m_imagePath; // 0x30 (48)
	}; // 0x38 (56)
}

