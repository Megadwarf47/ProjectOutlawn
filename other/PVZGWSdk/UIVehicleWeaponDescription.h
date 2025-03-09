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
	class UIVehicleWeaponDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVehicleWeaponDescription"); }
		virtual ~UIVehicleWeaponDescription() override {}
		UIVehicleWeaponDescription() {
		};

		String m_name; // 0x28 (40)
	}; // 0x30 (48)
}

