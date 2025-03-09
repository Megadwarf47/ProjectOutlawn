///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class ClothAssetInstance;
}

namespace fb {
	class ClothComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothComponentData"); }
		virtual ~ClothComponentData() override {}
		ClothComponentData() {
		};

		RefArray<ClothAssetInstance> m_instances; // 0x70 (112)
	}; // 0x80 (128)
}

