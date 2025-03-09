///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class Asset;
	class UnlockAssetBase;
}

namespace fb {
	class UnlockGroup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockGroup"); }
		virtual ~UnlockGroup() override {}
		UnlockGroup() {
		};

		String m_groupName; // 0x18 (24)
		RefArray<UnlockAssetBase> m_unlocks; // 0x20 (32)
		RefArray<Asset> m_unlockAssets; // 0x28 (40)
	}; // 0x30 (48)
}

