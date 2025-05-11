///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinearTransform.h>
#include <fb/SocketObjectDataBase.h>

namespace fb {
	class SoldierWeaponSocketObjectData : public SocketObjectDataBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponSocketObjectData"); }
		virtual ~SoldierWeaponSocketObjectData() override {}
		SoldierWeaponSocketObjectData() {
		};

		Guid m_soldierWeaponGuid; // 0x10 (16)
		LinearTransform m_transform; // 0x20 (32)
	}; // 0x60 (96)
}

