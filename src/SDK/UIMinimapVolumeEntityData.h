///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class Asset;
}

namespace fb {
	class UIMinimapVolumeEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapVolumeEntityData"); }
		virtual ~UIMinimapVolumeEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIMinimapVolumeEntityData() {
			m_isDefault = false;
		};

		CtrRef<Asset> m_asset; // 0x18 (24)
		bool m_isDefault; // 0x20 (32)
	}; // 0x28 (40)
}

