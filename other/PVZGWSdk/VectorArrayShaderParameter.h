///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ShaderParameterType.h>
#include <fb/String.h>
#include <fb/Vec4.h>

namespace fb {
	struct VectorArrayShaderParameter {
		VectorArrayShaderParameter() {
			m_parameterType = ShaderParameterType::ShaderParameterType_Bool;
		};

		String m_parameterName; // 0x0 (0)
		ShaderParameterType m_parameterType; // 0x8 (8)
		Array<Vec4> m_values; // 0x10 (16)
	}; // 0x18 (24)
}

