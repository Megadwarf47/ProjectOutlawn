///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/EnlightenType.h>
#include <fb/RefArray.h>

namespace fb {
	class MeshLodGroup;
	class MeshMaterial;
	class ProceduralAnimationTypeSimple;
}

namespace fb {
	class MeshAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshAsset"); }
		virtual ~MeshAsset() override {}
		MeshAsset() {
			m_meshSetResource = ;
			m_occluderMeshResource = ;
			m_lodScale = 1.f;
			m_cullScale = 1.f;
			m_coverageValue = 0.f;
			m_enlightenType = EnlightenType::EnlightenType_Dynamic;
			m_nameHash = 0;
			m_streamingEnable = true;
			m_occluderMeshEnable = false;
			m_occluderHighPriority = false;
			m_occluderIsConservative = true;
			m_destructionMaterialEnable = false;
		};

		CtrRef<MeshLodGroup> m_lodGroup; // 0x18 (24)
		ResourceRef m_meshSetResource; // 0x20 (32)
		ResourceRef m_occluderMeshResource; // 0x28 (40)
		float m_lodScale; // 0x30 (48)
		float m_cullScale; // 0x34 (52)
		float m_coverageValue; // 0x38 (56)
		EnlightenType m_enlightenType; // 0x3C (60)
		CtrRef<ProceduralAnimationTypeSimple> m_proceduralAnimation; // 0x40 (64)
		RefArray<MeshMaterial> m_materials; // 0x48 (72)
		u32 m_nameHash; // 0x50 (80)
		bool m_streamingEnable; // 0x54 (84)
		bool m_occluderMeshEnable; // 0x55 (85)
		bool m_occluderHighPriority; // 0x56 (86)
		bool m_occluderIsConservative; // 0x57 (87)
		bool m_destructionMaterialEnable; // 0x58 (88)
	}; // 0x60 (96)
}

