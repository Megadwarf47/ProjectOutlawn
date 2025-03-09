///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/IndexRange.h>
#include <fb/LinearTransform.h>
#include <fb/RadiosityTypeOverride.h>
#include <fb/Types.h>

namespace fb {
	class GamePhysicsEntityData;
	class MeshAsset;
}

namespace fb {
	struct StaticModelGroupMemberData {
		StaticModelGroupMemberData() {
			m_instanceCount = 0;
			m_healthStateEntityManagerId = 0;
			m_physicsPartCountPerInstance = 0;
			m_networkIdCountPerInstance = 0;
			m_partComponentCount = 0;
		};

		Array<LinearTransform> m_instanceTransforms; // 0x0 (0)
		Array<u32> m_instanceObjectVariation; // 0x8 (8)
		Array<bool> m_instanceCastSunShadow; // 0x10 (16)
		Array<bool> m_instanceCastReflection; // 0x18 (24)
		Array<RadiosityTypeOverride> m_instanceRadiosityTypeOverride; // 0x20 (32)
		Array<bool> m_instanceTerrainShaderNodesEnable; // 0x28 (40)
		CtrRef<GamePhysicsEntityData> m_memberType; // 0x30 (48)
		CtrRef<MeshAsset> m_meshAsset; // 0x38 (56)
		u32 m_instanceCount; // 0x40 (64)
		u32 m_healthStateEntityManagerId; // 0x44 (68)
		IndexRange m_physicsPartRange; // 0x48 (72)
		u32 m_physicsPartCountPerInstance; // 0x50 (80)
		IndexRange m_networkIdRange; // 0x54 (84)
		u32 m_networkIdCountPerInstance; // 0x5C (92)
		u32 m_partComponentCount; // 0x60 (96)
	}; // 0x68 (104)
}

