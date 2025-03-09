///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class ClientPausedEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientPausedEntityData"); }
		virtual ~ClientPausedEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ClientPausedEntityData() {
		};

	}; // 0x18 (24)
}

