///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterBlueprint.h>

namespace fb {
	class SoldierBlueprint : public CharacterBlueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierBlueprint"); }
		virtual ~SoldierBlueprint() override {}
		SoldierBlueprint() {
		};

	}; // 0x48 (72)
}

