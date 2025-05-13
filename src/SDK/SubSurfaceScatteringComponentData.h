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
	class SubSurfaceScatteringComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubSurfaceScatteringComponentData"); }
		virtual ~SubSurfaceScatteringComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SubSurfaceScatteringComponentData() {
			m_simpleSssColor = Vec3(0.2f, 0.1f, 0.05f);
			m_advancedSssMat0Width = Vec3(1.f, 1.f, 1.f);
			m_advancedSssMat1Width = Vec3(1.f, 1.f, 1.f);
			m_advancedSssMat2Width = Vec3(1.f, 1.f, 1.f);
			m_advancedSssMat3Width = Vec3(1.f, 1.f, 1.f);
			m_advancedSssMat4Width = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_simpleSssRolloffKeyLight = 0.33f;
			m_simpleSssRolloffLocalLight = 1.f;
			m_advancedSssEnable = false;
		};

		Vec3 m_simpleSssColor; // 0x80 (128)
		Vec3 m_advancedSssMat0Width; // 0x90 (144)
		Vec3 m_advancedSssMat1Width; // 0xA0 (160)
		Vec3 m_advancedSssMat2Width; // 0xB0 (176)
		Vec3 m_advancedSssMat3Width; // 0xC0 (192)
		Vec3 m_advancedSssMat4Width; // 0xD0 (208)
		Realm m_realm; // 0xE0 (224)
		float m_simpleSssRolloffKeyLight; // 0xE4 (228)
		float m_simpleSssRolloffLocalLight; // 0xE8 (232)
		bool m_advancedSssEnable; // 0xEC (236)
	}; // 0xF0 (240)
}

