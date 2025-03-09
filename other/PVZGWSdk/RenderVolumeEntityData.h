///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RenderVolumeTransformType.h>
#include <fb/SpatialEntityData.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>
#include <fb/Vec4.h>

namespace fb {
	class RenderVolumeEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RenderVolumeEntityData"); }
		virtual ~RenderVolumeEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		RenderVolumeEntityData() {
			m_userMasks = Vec4(1.f, 1.f, 1.f, 1.f);
			m_transformType = RenderVolumeTransformType::RenderVolumeTransformType_WorldSpaceInv;
			m_enabled = true;
		};

		Vec4 m_userMasks; // 0x60 (96)
		SurfaceShaderInstanceDataStruct m_shader; // 0x70 (112)
		RenderVolumeTransformType m_transformType; // 0x98 (152)
		bool m_enabled; // 0x9C (156)
	}; // 0xA0 (160)
}

