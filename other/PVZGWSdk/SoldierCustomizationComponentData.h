///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterCustomizationComponentData.h>

namespace fb {
	class SoldierCustomizationComponentData : public CharacterCustomizationComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierCustomizationComponentData"); }
		virtual ~SoldierCustomizationComponentData() override {}
		SoldierCustomizationComponentData() {
		};

	}; // 0x80 (128)
}

