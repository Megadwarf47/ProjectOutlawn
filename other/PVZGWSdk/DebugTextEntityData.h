///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class DebugTextEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugTextEntityData"); }
		virtual ~DebugTextEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DebugTextEntityData() {
			m_textColor = Vec3(0.5f, 0.5f, 0.5f);
			m_realm = Realm::Realm_Client;
			m_scale = 1.f;
			m_centered = true;
			m_visible = true;
			m_depthTest = true;
			m_scaleWithDistance = true;
		};

		Vec3 m_textColor; // 0x60 (96)
		String m_debugText; // 0x70 (112)
		Realm m_realm; // 0x78 (120)
		float m_scale; // 0x7C (124)
		bool m_centered; // 0x80 (128)
		bool m_visible; // 0x81 (129)
		bool m_depthTest; // 0x82 (130)
		bool m_scaleWithDistance; // 0x83 (131)
	}; // 0x90 (144)
}

