///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class Asset;
}

namespace fb {
	class UIActionEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIActionEntityData"); }
		virtual ~UIActionEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIActionEntityData() {
			m_actionKey = 0;
		};

		s32 m_actionKey; // 0x18 (24)
		Array<String> m_params; // 0x20 (32)
		CtrRef<Asset> m_actionAsset; // 0x28 (40)
		Array<String> m_propertyParams; // 0x30 (48)
	}; // 0x38 (56)
}

