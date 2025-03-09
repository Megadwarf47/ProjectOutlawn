///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/TerrainShaderParameterDataType.h>
#include <fb/Types.h>

namespace fb {
	struct TerrainShaderParameter {
		TerrainShaderParameter() {
			m_parameterHandle = 0;
			m_parameterType = TerrainShaderParameterDataType::TerrainShaderParameterDataType_Bool;
		};

		u32 m_parameterHandle; // 0x0 (0)
		TerrainShaderParameterDataType m_parameterType; // 0x4 (4)
		String m_parameterName; // 0x8 (8)
	}; // 0x10 (16)
}

