///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BasicUnlockInfo.h>
#include <fb/CtrRef.h>
#include <fb/StatsCategoryGuidData.h>

namespace fb {
	class CriteriaGateList;
}

namespace fb {
	class StatsCategoryWeaponData : public StatsCategoryGuidData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryWeaponData"); }
		virtual ~StatsCategoryWeaponData() override {}
		StatsCategoryWeaponData() {
			m_soldierWeaponId = 0;
		};

		u32 m_soldierWeaponId; // 0x28 (40)
		CtrRef<CriteriaGateList> m_accessoryUnlockGates; // 0x30 (48)
		Array<BasicUnlockInfo> m_unlocksInfo; // 0x38 (56)
	}; // 0x40 (64)
}

