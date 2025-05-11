///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>

namespace fb {
	class SoundDataAsset;
}

namespace fb {
	class SoundDataEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundDataEntityData"); }
		virtual ~SoundDataEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundDataEntityData() {
		};

		RefArray<SoundDataAsset> m_dataAssets; // 0x18 (24)
	}; // 0x20 (32)
}

