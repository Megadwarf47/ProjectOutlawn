///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/TerrainShaderParameter.h>

namespace fb {
	class TerrainShaderParameterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainShaderParameterEntityData"); }
		virtual ~TerrainShaderParameterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		TerrainShaderParameterEntityData() {
		};

		Array<TerrainShaderParameter> m_shaderParameters; // 0x18 (24)
	}; // 0x20 (32)
}

