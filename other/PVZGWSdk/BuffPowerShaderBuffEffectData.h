///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/String.h>

namespace fb {
	class BuffPowerShaderBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffPowerShaderBuffEffectData"); }
		virtual ~BuffPowerShaderBuffEffectData() override {}
		BuffPowerShaderBuffEffectData() {
		};

		String m_parameter; // 0x10 (16)
	}; // 0x18 (24)
}

