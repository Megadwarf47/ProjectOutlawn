///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/String.h>
#include <fb/Vec4.h>

namespace fb {
	class ShaderBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderBuffEffectData"); }
		virtual ~ShaderBuffEffectData() override {}
		ShaderBuffEffectData() {
		};

		String m_parameter; // 0x10 (16)
		Vec4 m_value; // 0x20 (32)
	}; // 0x30 (48)
}

