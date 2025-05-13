///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class LoggingEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LoggingEntityData"); }
		virtual ~LoggingEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LoggingEntityData() {
			m_realm = Realm::Realm_Server;
			m_floatValue = 0.f;
			m_intValue = 0;
			m_boolValue = false;
		};

		Array<String> m_strings; // 0x18 (24)
		LinearTransform m_transformValue; // 0x20 (32)
		Vec3 m_vec3Value; // 0x60 (96)
		Realm m_realm; // 0x70 (112)
		float m_floatValue; // 0x74 (116)
		s32 m_intValue; // 0x78 (120)
		Vec2 m_vec2Value; // 0x7C (124)
		bool m_boolValue; // 0x84 (132)
	}; // 0x90 (144)
}

