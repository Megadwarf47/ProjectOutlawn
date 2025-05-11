///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class ClientEnteredIngameEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientEnteredIngameEntityData"); }
		virtual ~ClientEnteredIngameEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ClientEnteredIngameEntityData() {
		};

	}; // 0x18 (24)
}

