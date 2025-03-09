///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class MeshAsset;
}

namespace fb {
	class AnimatedPointCloudAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedPointCloudAsset"); }
		virtual ~AnimatedPointCloudAsset() override {}
		AnimatedPointCloudAsset() {
			m_resource = ;
		};

		CtrRef<MeshAsset> m_meshAsset; // 0x18 (24)
		ResourceRef m_resource; // 0x20 (32)
	}; // 0x28 (40)
}

