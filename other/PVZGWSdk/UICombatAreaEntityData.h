///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameObjectData.h>

namespace fb {
	class UICombatAreaAsset;
}

namespace fb {
	class UICombatAreaEntityData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICombatAreaEntityData"); }
		virtual ~UICombatAreaEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UICombatAreaEntityData() {
		};

		CtrRef<UICombatAreaAsset> m_asset; // 0x18 (24)
	}; // 0x20 (32)
}

