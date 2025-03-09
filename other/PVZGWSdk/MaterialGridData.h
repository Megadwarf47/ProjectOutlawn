///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/MaterialDecl.h>
#include <fb/MaterialInteractionGridRow.h>
#include <fb/MaterialRelationPropertyPair.h>

namespace fb {
	class MaterialGridData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialGridData"); }
		virtual ~MaterialGridData() override {}
		MaterialGridData() {
			m_defaultMaterialIndex = 0;
		};

		MaterialDecl m_defaultMaterial; // 0x18 (24)
		Array<MaterialDecl> m_materialPairs; // 0x20 (32)
		Array<u32> m_materialIndexMap; // 0x28 (40)
		u32 m_defaultMaterialIndex; // 0x30 (48)
		Array<MaterialRelationPropertyPair> m_materialProperties; // 0x38 (56)
		Array<MaterialInteractionGridRow> m_interactionGrid; // 0x40 (64)
	}; // 0x48 (72)
}

