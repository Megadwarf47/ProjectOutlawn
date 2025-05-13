///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>

namespace fb {
	class ClothAsset;
	class MeshAsset;
}

namespace fb {
	class ClothEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothEntityData"); }
		virtual ~ClothEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ClothEntityData() {
			m_characterLightingEnable = false;
		};

		CtrRef<MeshAsset> m_mesh; // 0x80 (128)
		CtrRef<ClothAsset> m_cloth; // 0x88 (136)
		bool m_characterLightingEnable; // 0x90 (144)
	}; // 0xA0 (160)
}

