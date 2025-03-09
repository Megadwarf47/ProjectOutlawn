///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameObjectData.h>

namespace fb {
	class EntityData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityData"); }
		virtual ~EntityData() override {}
		EntityData() {
		};

	}; // 0x18 (24)
}

