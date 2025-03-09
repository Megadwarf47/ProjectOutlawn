///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class SpecialModeWeaponComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpecialModeWeaponComponentData"); }
		virtual ~SpecialModeWeaponComponentData() override {}
		SpecialModeWeaponComponentData() {
		};

		String m_id; // 0x70 (112)
	}; // 0x80 (128)
}

