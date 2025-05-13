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
	class TextureAsset;
}

namespace fb {
	class UIDistanceFieldAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDistanceFieldAsset"); }
		virtual ~UIDistanceFieldAsset() override {}
		UIDistanceFieldAsset() {
		};

		CtrRef<TextureAsset> m_distanceFieldTexture; // 0x18 (24)
	}; // 0x20 (32)
}

