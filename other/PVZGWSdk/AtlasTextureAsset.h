///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class AtlasTextureAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AtlasTextureAsset"); }
		virtual ~AtlasTextureAsset() override {}
		AtlasTextureAsset() {
			m_animationColumnCount = 1;
			m_resource = ;
			m_animationFrameCount = 1;
		};

		s32 m_animationColumnCount; // 0x18 (24)
		ResourceRef m_resource; // 0x20 (32)
		s32 m_animationFrameCount; // 0x28 (40)
	}; // 0x30 (48)
}

