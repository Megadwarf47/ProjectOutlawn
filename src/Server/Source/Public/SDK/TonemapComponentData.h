///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/TonemapMethod.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TonemapComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TonemapComponentData"); }
		virtual ~TonemapComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TonemapComponentData() {
			m_bloomScale = Vec3(0.05f, 0.05f, 0.05f);
			m_realm = Realm::Realm_Client;
			m_tonemapMethod = TonemapMethod::TonemapMethod_FilmicNeutral;
			m_middleGray = 0.25f;
			m_minExposure = 0.3f;
			m_maxExposure = 3.f;
			m_exposureAdjustTime = 2.f;
			m_bloomBias = 0.f;
			m_chromostereopsisScale = 1.f;
			m_chromostereopsisOffset = 1.f;
			m_chromostereopsisEnable = false;
		};

		Vec3 m_bloomScale; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		TonemapMethod m_tonemapMethod; // 0x94 (148)
		float m_middleGray; // 0x98 (152)
		float m_minExposure; // 0x9C (156)
		float m_maxExposure; // 0xA0 (160)
		float m_exposureAdjustTime; // 0xA4 (164)
		float m_bloomBias; // 0xA8 (168)
		float m_chromostereopsisScale; // 0xAC (172)
		float m_chromostereopsisOffset; // 0xB0 (176)
		bool m_chromostereopsisEnable; // 0xB4 (180)
	}; // 0xC0 (192)
}

