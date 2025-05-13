///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class AnimationEnumerationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationEnumerationEntityData"); }
		virtual ~AnimationEnumerationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AnimationEnumerationEntityData() {
			m_realm = Realm::Realm_Client;
			m_detectChangesFromStart = false;
		};

		Realm m_realm; // 0x18 (24)
		CtrRef<AntEnumeration> m_antEnum; // 0x20 (32)
		bool m_detectChangesFromStart; // 0x28 (40)
	}; // 0x30 (48)
}

