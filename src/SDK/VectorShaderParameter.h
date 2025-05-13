///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ShaderParameterType.h>
#include <fb/String.h>
#include <fb/Vec4.h>

namespace fb {
	struct VectorShaderParameter {
		VectorShaderParameter() {
			m_parameterType = ShaderParameterType::ShaderParameterType_Bool;
		};

		Vec4 m_value; // 0x0 (0)
		String m_parameterName; // 0x10 (16)
		ShaderParameterType m_parameterType; // 0x18 (24)
	}; // 0x20 (32)
}

