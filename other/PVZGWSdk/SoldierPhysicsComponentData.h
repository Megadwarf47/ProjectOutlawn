///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterMasterPhysicsComponentData.h>

namespace fb {
	class SoldierPhysicsComponentData : public CharacterMasterPhysicsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierPhysicsComponentData"); }
		virtual ~SoldierPhysicsComponentData() override {}
		SoldierPhysicsComponentData() {
		};

	}; // 0x80 (128)
}

