///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class HighlightEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HighlightEntityData"); }
		virtual ~HighlightEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		HighlightEntityData() {
			m_realm = Realm::Realm_Client;
			m_color = Vec3(0.f, 1.f, 0.f);
			m_bottomRight = Vec2(200.f, 100.f);
			m_alpha = 64;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_color; // 0x20 (32)
		Vec2 m_topLeft; // 0x30 (48)
		Vec2 m_bottomRight; // 0x38 (56)
		u8 m_alpha; // 0x40 (64)
	}; // 0x50 (80)
}

