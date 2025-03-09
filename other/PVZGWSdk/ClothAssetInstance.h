///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class ClothObjectBlueprint;
}

namespace fb {
	class ClothAssetInstance : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothAssetInstance"); }
		virtual ~ClothAssetInstance() override {}
		ClothAssetInstance() {
			m_worldCollision = true;
		};

		CtrRef<ClothObjectBlueprint> m_cloth; // 0x18 (24)
		bool m_worldCollision; // 0x20 (32)
	}; // 0x28 (40)
}

