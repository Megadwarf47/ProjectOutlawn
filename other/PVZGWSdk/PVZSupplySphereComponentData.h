///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/SupplyData.h>

namespace fb {
	class WeaponUnlockAsset;
}

namespace fb {
	class PVZSupplySphereComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSupplySphereComponentData"); }
		virtual ~PVZSupplySphereComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZSupplySphereComponentData() {
			m_enabled = true;
		};

		SupplyData m_supplyData; // 0x70 (112)
		CtrRef<WeaponUnlockAsset> m_weaponUnlock; // 0x88 (136)
		bool m_enabled; // 0x90 (144)
	}; // 0xA0 (160)
}

