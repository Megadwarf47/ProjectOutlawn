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
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class PropertyGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertyGateEntityData"); }
		virtual ~PropertyGateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PropertyGateEntityData() {
			m_realm = Realm::Realm_Server;
			m_intIn = 0;
			m_floatIn = 0.f;
			m_default = true;
			m_writePropertyOnOpenGate = false;
			m_boolIn = false;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_vec3In; // 0x20 (32)
		Vec4 m_vec4In; // 0x30 (48)
		LinearTransform m_transformIn; // 0x40 (64)
		s32 m_intIn; // 0x80 (128)
		float m_floatIn; // 0x84 (132)
		bool m_default; // 0x88 (136)
		bool m_writePropertyOnOpenGate; // 0x89 (137)
		bool m_boolIn; // 0x8A (138)
	}; // 0x90 (144)
}

