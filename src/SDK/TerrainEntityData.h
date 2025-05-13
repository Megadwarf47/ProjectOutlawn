///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class TerrainData;
}

namespace fb {
	class TerrainEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainEntityData"); }
		virtual ~TerrainEntityData() override {}
		TerrainEntityData() {
			m_decalsResource = ;
			m_targetAdditionalModifiersCapacity = 0;
			m_visible = true;
		};

		ResourceRef m_decalsResource; // 0x90 (144)
		CtrRef<TerrainData> m_terrainAsset; // 0x98 (152)
		MaterialDecl m_waterMaterial; // 0xA0 (160)
		u32 m_targetAdditionalModifiersCapacity; // 0xA4 (164)
		bool m_visible; // 0xA8 (168)
	}; // 0xB0 (176)
}

