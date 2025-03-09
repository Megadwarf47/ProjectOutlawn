///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class AnimationEnumerationChoiceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationEnumerationChoiceEntityData"); }
		virtual ~AnimationEnumerationChoiceEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AnimationEnumerationChoiceEntityData() {
			m_realm = Realm::Realm_Client;
			m_value = -1;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_value; // 0x1C (28)
	}; // 0x20 (32)
}

