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
	class UIVehicleDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVehicleDescription"); }
		virtual ~UIVehicleDescription() override {}
		UIVehicleDescription() {
		};

		String m_name; // 0x28 (40)
		String m_description; // 0x30 (48)
		String m_texturePath; // 0x38 (56)
	}; // 0x40 (64)
}

