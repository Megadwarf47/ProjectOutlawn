///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class Minimap2DTextureAsset;
}

namespace fb {
	class Minimap2DEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Minimap2DEntityData"); }
		virtual ~Minimap2DEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		Minimap2DEntityData() {
			m_layer = 0;
			m_outputSize = 2048;
			m_outputResolution = 2048;
			m_maxActiveTiles = 16;
			m_visible = true;
			m_isPatch = false;
		};

		String m_tag; // 0x18 (24)
		u32 m_layer; // 0x20 (32)
		u32 m_outputSize; // 0x24 (36)
		u32 m_outputResolution; // 0x28 (40)
		u32 m_maxActiveTiles; // 0x2C (44)
		CtrRef<Minimap2DTextureAsset> m_minimap2DTextureAsset; // 0x30 (48)
		bool m_visible; // 0x38 (56)
		bool m_isPatch; // 0x39 (57)
	}; // 0x40 (64)
}

