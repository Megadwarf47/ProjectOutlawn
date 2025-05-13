///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class VignetteComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VignetteComponentData"); }
		virtual ~VignetteComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		VignetteComponentData() {
			m_realm = Realm::Realm_Client;
			m_scale = Vec2(2.f, 2.f);
			m_exponent = 1.f;
			m_opacity = 0.f;
			m_enable = false;
		};

		Vec3 m_color; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		Vec2 m_scale; // 0x94 (148)
		float m_exponent; // 0x9C (156)
		float m_opacity; // 0xA0 (160)
		bool m_enable; // 0xA4 (164)
	}; // 0xB0 (176)
}

