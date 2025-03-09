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
	class DynamicAOComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicAOComponentData"); }
		virtual ~DynamicAOComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DynamicAOComponentData() {
			m_realm = Realm::Realm_Client;
			m_ssaoFade = 1.f;
			m_ssaoRadius = 1.f;
			m_ssaoMaxDistanceInner = 1.f;
			m_ssaoMaxDistanceOuter = 1.f;
			m_hbaoRadius = 1.f;
			m_hbaoAngleBias = 0.f;
			m_hbaoAttenuation = 0.7f;
			m_hbaoContrast = 1.4f;
			m_hbaoMaxFootprintRadius = 0.1f;
			m_hbaoPowerExponent = 1.f;
			m_enable = true;
		};

		Realm m_realm; // 0x80 (128)
		float m_ssaoFade; // 0x84 (132)
		float m_ssaoRadius; // 0x88 (136)
		float m_ssaoMaxDistanceInner; // 0x8C (140)
		float m_ssaoMaxDistanceOuter; // 0x90 (144)
		float m_hbaoRadius; // 0x94 (148)
		float m_hbaoAngleBias; // 0x98 (152)
		float m_hbaoAttenuation; // 0x9C (156)
		float m_hbaoContrast; // 0xA0 (160)
		float m_hbaoMaxFootprintRadius; // 0xA4 (164)
		float m_hbaoPowerExponent; // 0xA8 (168)
		bool m_enable; // 0xAC (172)
	}; // 0xB0 (176)
}

