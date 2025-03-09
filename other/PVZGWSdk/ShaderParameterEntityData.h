///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Vec4.h>

namespace fb {
	class ShaderParameterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderParameterEntityData"); }
		virtual ~ShaderParameterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ShaderParameterEntityData() {
			m_parameterHandle = 0;
		};

		u32 m_parameterHandle; // 0x18 (24)
		Vec4 m_vecParam; // 0x20 (32)
	}; // 0x30 (48)
}

