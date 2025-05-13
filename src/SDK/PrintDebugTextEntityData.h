///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/String.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class PrintDebugTextEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PrintDebugTextEntityData"); }
		virtual ~PrintDebugTextEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PrintDebugTextEntityData() {
			m_realm = Realm::Realm_Server;
			m_textColor = Vec3(1.f, 1.f, 1.f);
			m_screenPosition = Vec2(-1.f, -1.f);
			m_timeToShow = -1.f;
			m_textScale = 1.f;
			m_enabled = true;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_textColor; // 0x20 (32)
		String m_text; // 0x30 (48)
		Vec2 m_screenPosition; // 0x38 (56)
		float m_timeToShow; // 0x40 (64)
		float m_textScale; // 0x44 (68)
		bool m_enabled; // 0x48 (72)
	}; // 0x50 (80)
}

