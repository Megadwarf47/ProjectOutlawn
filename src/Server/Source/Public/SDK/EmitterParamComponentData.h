///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EmitterParamOverride.h>
#include <fb/Realm.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class EmitterParamComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterParamComponentData"); }
		virtual ~EmitterParamComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EmitterParamComponentData() {
			m_realm = Realm::Realm_Client;
			m_parameter = EmitterParamOverride::EmitterParamOverride_EmitterParameter1;
			m_value = 1.f;
		};

		Realm m_realm; // 0x80 (128)
		EmitterParamOverride m_parameter; // 0x84 (132)
		float m_value; // 0x88 (136)
	}; // 0x90 (144)
}

