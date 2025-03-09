///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>
#include <fb/Vec4.h>

namespace fb {
	class DestructionMaskVolumeEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionMaskVolumeEntityData"); }
		virtual ~DestructionMaskVolumeEntityData() override {}
		DestructionMaskVolumeEntityData() {
			m_dustAccumulationCurve = Vec4(-4.08482f, 2.747351f, -0.950717f, 1.933036f);
			m_shaderUserMasks = Vec4(1.f, 0.f, 0.f, 1.f);
			m_radius = 10.f;
			m_dustAccumulationLifeTime = 3.f;
		};

		Vec4 m_dustAccumulationCurve; // 0x60 (96)
		Vec4 m_shaderUserMasks; // 0x70 (112)
		float m_radius; // 0x80 (128)
		float m_dustAccumulationLifeTime; // 0x84 (132)
		SurfaceShaderInstanceDataStruct m_shader; // 0x88 (136)
	}; // 0xB0 (176)
}

