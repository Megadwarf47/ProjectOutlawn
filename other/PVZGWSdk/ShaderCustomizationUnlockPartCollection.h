///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CustomizedMeshMaterialsData.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class ShaderCustomizationUnlockPartCollection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderCustomizationUnlockPartCollection"); }
		virtual ~ShaderCustomizationUnlockPartCollection() override {}
		ShaderCustomizationUnlockPartCollection() {
		};

		RefArray<ObjectBlueprint> m_meshBlueprints; // 0x10 (16)
		String m_shaderNodeName; // 0x18 (24)
		Array<CustomizedMeshMaterialsData> m_meshMaterials; // 0x20 (32)
	}; // 0x28 (40)
}

