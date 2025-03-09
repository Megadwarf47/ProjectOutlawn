///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class TerrainData;
	class VisualTerrainSettings;
}

namespace fb {
	class VisualTerrainEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualTerrainEntityData"); }
		virtual ~VisualTerrainEntityData() override {}
		VisualTerrainEntityData() {
			m_decalsResource = ;
		};

		CtrRef<TerrainData> m_terrain; // 0x18 (24)
		ResourceRef m_decalsResource; // 0x20 (32)
		CtrRef<VisualTerrainSettings> m_settings; // 0x28 (40)
	}; // 0x30 (48)
}

