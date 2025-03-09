///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/XBoneSystemPhrase.h>

namespace fb {
	class XBoneSystemCommandStatusEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("XBoneSystemCommandStatusEntityData"); }
		virtual ~XBoneSystemCommandStatusEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		XBoneSystemCommandStatusEntityData() {
			m_realm = Realm::Realm_Client;
			m_phrase = XBoneSystemPhrase::XBoneSystemPhrase_Play;
			m_enableAtStart = true;
		};

		Realm m_realm; // 0x18 (24)
		XBoneSystemPhrase m_phrase; // 0x1C (28)
		bool m_enableAtStart; // 0x20 (32)
	}; // 0x28 (40)
}

