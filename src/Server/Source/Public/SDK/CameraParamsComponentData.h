///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class CameraParamsComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraParamsComponentData"); }
		virtual ~CameraParamsComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CameraParamsComponentData() {
			m_realm = Realm::Realm_Client;
			m_viewDistance = -1.f;
			m_nearPlane = -1.f;
			m_sunShadowmapViewDistance = -1.f;
		};

		Realm m_realm; // 0x80 (128)
		float m_viewDistance; // 0x84 (132)
		float m_nearPlane; // 0x88 (136)
		float m_sunShadowmapViewDistance; // 0x8C (140)
	}; // 0x90 (144)
}

