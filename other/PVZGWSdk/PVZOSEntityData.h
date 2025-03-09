///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZOSEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZOSEntityData"); }
		virtual ~PVZOSEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZOSEntityData() {
		};

	}; // 0x18 (24)
}

