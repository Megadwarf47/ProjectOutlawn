///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DecalAtlasTile.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class DecalEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DecalEntityData"); }
		virtual ~DecalEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DecalEntityData() {
			m_projected = true;
			m_sortingPriority = 0;
			m_enabled = true;
		};

		DecalAtlasTile m_atlasTile; // 0x60 (96)
		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x78 (120)
		bool m_projected; // 0x80 (128)
		u8 m_sortingPriority; // 0x81 (129)
		bool m_enabled; // 0x82 (130)
	}; // 0x90 (144)
}

