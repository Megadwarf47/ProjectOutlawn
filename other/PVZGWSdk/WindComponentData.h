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
	class WindComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WindComponentData"); }
		virtual ~WindComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		WindComponentData() {
			m_realm = Realm::Realm_Client;
			m_windDirection = 0.f;
			m_windStrength = 2.f;
			m_windVariationMultiplier = 1.f;
			m_windVariationRateMultiplier = 1.f;
			m_windMicroVariationMultiplier = 1.f;
			m_turbulenceMultiplier = 10.f;
			m_turbulenceScale = 0.5f;
		};

		Realm m_realm; // 0x80 (128)
		float m_windDirection; // 0x84 (132)
		float m_windStrength; // 0x88 (136)
		float m_windVariationMultiplier; // 0x8C (140)
		float m_windVariationRateMultiplier; // 0x90 (144)
		float m_windMicroVariationMultiplier; // 0x94 (148)
		float m_turbulenceMultiplier; // 0x98 (152)
		float m_turbulenceScale; // 0x9C (156)
	}; // 0xA0 (160)
}

