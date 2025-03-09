///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class EntityOwnerPlayerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityOwnerPlayerComponentData"); }
		virtual ~EntityOwnerPlayerComponentData() override {}
		EntityOwnerPlayerComponentData() {
		};

	}; // 0x70 (112)
}

