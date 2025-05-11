///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SaveGameLoadedEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SaveGameLoadedEntityData"); }
		virtual ~SaveGameLoadedEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SaveGameLoadedEntityData() {
		};

	}; // 0x18 (24)
}

