///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/WeaponLagBinding.h>

namespace fb {
	class WeaponLagEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponLagEntityData"); }
		virtual ~WeaponLagEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		WeaponLagEntityData() {
		};

		WeaponLagBinding m_binding; // 0x18 (24)
	}; // 0x80 (128)
}

