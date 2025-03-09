///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/EffectParameterType.h>
#include <fb/String.h>

namespace fb {
	class EffectParameter : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectParameter"); }
		virtual ~EffectParameter() override {}
		EffectParameter() {
			m_paramType = EffectParameterType::EffectParameterType_Float;
		};

		String m_name; // 0x10 (16)
		EffectParameterType m_paramType; // 0x18 (24)
	}; // 0x20 (32)
}

