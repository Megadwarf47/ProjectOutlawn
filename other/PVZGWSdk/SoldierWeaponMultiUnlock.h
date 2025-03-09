///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/UnlockAssetPair.h>
#include <fb/UnlockUserDataBase.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	class SoldierWeaponMultiUnlock : public UnlockUserDataBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponMultiUnlock"); }
		virtual ~SoldierWeaponMultiUnlock() override {}
		SoldierWeaponMultiUnlock() {
		};

		CtrRef<UnlockAssetBase> m_first; // 0x18 (24)
		Array<UnlockAssetPair> m_unlockAssetPairs; // 0x20 (32)
	}; // 0x28 (40)
}

