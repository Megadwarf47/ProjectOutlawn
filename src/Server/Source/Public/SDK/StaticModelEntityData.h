///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/LinearTransform.h>
#include <fb/PhysicsPartInfo.h>
#include <fb/RefArray.h>
#include <fb/StaticModelNetworkInfo.h>

namespace fb {
	class MeshAsset;
	class PartLinkData;
}

namespace fb {
	class StaticModelEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticModelEntityData"); }
		virtual ~StaticModelEntityData() override {}
		StaticModelEntityData() {
			m_boneCount = 0;
			m_excludeFromNearbyObjectDestruction = false;
			m_animatePhysics = false;
			m_terrainShaderNodesEnable = false;
			m_visible = true;
		};

		RefArray<PartLinkData> m_partLinks; // 0x90 (144)
		CtrRef<MeshAsset> m_mesh; // 0x98 (152)
		u32 m_boneCount; // 0xA0 (160)
		Array<LinearTransform> m_basePoseTransforms; // 0xA8 (168)
		Array<PhysicsPartInfo> m_physicsPartInfos; // 0xB0 (176)
		StaticModelNetworkInfo m_networkInfo; // 0xB8 (184)
		bool m_excludeFromNearbyObjectDestruction; // 0xD8 (216)
		bool m_animatePhysics; // 0xD9 (217)
		bool m_terrainShaderNodesEnable; // 0xDA (218)
		bool m_visible; // 0xDB (219)
	}; // 0xE0 (224)
}

