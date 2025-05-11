///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/ClothBoneTableEntry.h>
#include <fb/ClothSectionMapping.h>
#include <fb/ClothStatesSetup.h>

namespace fb {
	class ClothAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothAsset"); }
		virtual ~ClothAsset() override {}
		ClothAsset() {
			m_havokClothResource = ;
		};

		Array<ClothSectionMapping> m_meshSectionMappings; // 0x18 (24)
		ResourceRef m_havokClothResource; // 0x20 (32)
		ClothStatesSetup m_statesSetup; // 0x28 (40)
		Array<u32> m_displayBufferIndices; // 0x48 (72)
		Array<ClothBoneTableEntry> m_boneTable; // 0x50 (80)
	}; // 0x58 (88)
}

