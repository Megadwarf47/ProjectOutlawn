///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/RefArray.h>
#include <fb/Vec2.h>

namespace fb {
	class TextSequenceItem;
}

namespace fb {
	class TextSequenceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextSequenceEntityData"); }
		virtual ~TextSequenceEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TextSequenceEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		Array<String> m_events; // 0x20 (32)
		RefArray<TextSequenceItem> m_items; // 0x28 (40)
		Vec2 m_screenPosition; // 0x30 (48)
	}; // 0x38 (56)
}

