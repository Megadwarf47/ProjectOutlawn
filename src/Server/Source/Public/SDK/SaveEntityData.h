///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class SaveEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SaveEntityData"); }
		virtual ~SaveEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SaveEntityData() {
			m_checkForHumanPlayer = true;
			m_forceNotifyAllEntitiesOnLoad = false;
		};

		CtrRef<TextureAsset> m_saveScreenTexture; // 0x18 (24)
		String m_levelName; // 0x20 (32)
		String m_saveFileName; // 0x28 (40)
		String m_saveNameSID; // 0x30 (48)
		bool m_checkForHumanPlayer; // 0x38 (56)
		bool m_forceNotifyAllEntitiesOnLoad; // 0x39 (57)
	}; // 0x40 (64)
}

