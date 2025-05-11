///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/RefArray.h>

namespace fb {
	class CharacterCustomizationAsset;
}

namespace fb {
	class SwitchCharacterCustomizationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SwitchCharacterCustomizationEntityData"); }
		virtual ~SwitchCharacterCustomizationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SwitchCharacterCustomizationEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		Realm m_realm; // 0x18 (24)
		RefArray<CharacterCustomizationAsset> m_characterCustomizations; // 0x20 (32)
	}; // 0x28 (40)
}

