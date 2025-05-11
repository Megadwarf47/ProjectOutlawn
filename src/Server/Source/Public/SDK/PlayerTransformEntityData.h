///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentEntityData.h>

namespace fb {
	class PlayerTransformEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerTransformEntityData"); }
		virtual ~PlayerTransformEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlayerTransformEntityData() {
		};

	}; // 0x80 (128)
}

