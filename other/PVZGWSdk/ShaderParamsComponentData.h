///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/String.h>
#include <fb/Vec4.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class ShaderParamsComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderParamsComponentData"); }
		virtual ~ShaderParamsComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ShaderParamsComponentData() {
			m_realm = Realm::Realm_Client;
		};

		Vec4 m_value; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		String m_parameterName; // 0x98 (152)
	}; // 0xA0 (160)
}

