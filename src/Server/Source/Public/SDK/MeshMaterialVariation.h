///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>

namespace fb {
	class MeshMaterialVariation : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshMaterialVariation"); }
		virtual ~MeshMaterialVariation() override {}
		MeshMaterialVariation() {
		};

		SurfaceShaderInstanceDataStruct m_shader; // 0x10 (16)
	}; // 0x38 (56)
}

