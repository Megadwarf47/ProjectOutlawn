///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class AdvancedDogTagData;
	class BasicDogTagData;
	class StatsCategoryWeaponData;
}

namespace fb {
	class DogTagsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DogTagsAsset"); }
		virtual ~DogTagsAsset() override {}
		DogTagsAsset() {
		};

		CtrRef<StatsCategoryWeaponData> m_meleeKillWeapon; // 0x18 (24)
		RefArray<BasicDogTagData> m_basicDogTags; // 0x20 (32)
		RefArray<AdvancedDogTagData> m_advancedDogTags; // 0x28 (40)
	}; // 0x30 (48)
}

