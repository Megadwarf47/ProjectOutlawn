///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class DynamicEnvmapComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicEnvmapComponentData"); }
		virtual ~DynamicEnvmapComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DynamicEnvmapComponentData() {
			m_keyColorEnvmap = Vec3(1.f, 0.971f, 0.914f);
			m_skyColorEnvmap = Vec3(0.318f, 0.341f, 0.4f);
			m_groundColorEnvmap = Vec3(0.05f, 0.05f, 0.05f);
			m_realm = Realm::Realm_Client;
			m_enable = false;
			m_terrainReflectionsEnable = true;
		};

		Vec3 m_keyColorEnvmap; // 0x80 (128)
		Vec3 m_skyColorEnvmap; // 0x90 (144)
		Vec3 m_groundColorEnvmap; // 0xA0 (160)
		Realm m_realm; // 0xB0 (176)
		bool m_enable; // 0xB4 (180)
		bool m_terrainReflectionsEnable; // 0xB5 (181)
	}; // 0xC0 (192)
}

