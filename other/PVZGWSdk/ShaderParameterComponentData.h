///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/ShaderParameterVector.h>

namespace fb {
	class ShaderParameterComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderParameterComponentData"); }
		virtual ~ShaderParameterComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ShaderParameterComponentData() {
		};

		Array<ShaderParameterVector> m_shaderParameterVectors; // 0x70 (112)
	}; // 0x80 (128)
}

