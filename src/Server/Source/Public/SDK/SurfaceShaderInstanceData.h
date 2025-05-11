///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class SurfaceShaderInstanceData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SurfaceShaderInstanceData"); }
		virtual ~SurfaceShaderInstanceData() override {}
		SurfaceShaderInstanceData() {
		};

		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x10 (16)
	}; // 0x18 (24)
}

