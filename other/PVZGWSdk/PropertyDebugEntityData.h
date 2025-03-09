///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>
#include <fb/String.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class PropertyDebugEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertyDebugEntityData"); }
		virtual ~PropertyDebugEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PropertyDebugEntityData() {
			m_realm = Realm::Realm_Client;
			m_textColor = Vec3(0.5f, 0.5f, 0.5f);
			m_screenPosition = Vec2(100.f, 100.f);
			m_textScale = 1.f;
			m_floatValue = 0.f;
			m_intValue = 0;
			m_uIntValue = 0;
			m_multiline = true;
			m_showTransformInWorld = false;
			m_showTransformCoordinates = true;
			m_defaultVisible = true;
			m_boolValue = false;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_textColor; // 0x20 (32)
		Vec3 m_worldPosition; // 0x30 (48)
		LinearTransform m_transformValue; // 0x40 (64)
		Vec3 m_vec3Value; // 0x80 (128)
		Vec2 m_screenPosition; // 0x90 (144)
		String m_valuePrefix; // 0x98 (152)
		float m_textScale; // 0xA0 (160)
		float m_floatValue; // 0xA4 (164)
		s32 m_intValue; // 0xA8 (168)
		u32 m_uIntValue; // 0xAC (172)
		Vec2 m_vec2Value; // 0xB0 (176)
		String m_stringValue; // 0xB8 (184)
		bool m_multiline; // 0xC0 (192)
		bool m_showTransformInWorld; // 0xC1 (193)
		bool m_showTransformCoordinates; // 0xC2 (194)
		bool m_defaultVisible; // 0xC3 (195)
		bool m_boolValue; // 0xC4 (196)
	}; // 0xD0 (208)
}

