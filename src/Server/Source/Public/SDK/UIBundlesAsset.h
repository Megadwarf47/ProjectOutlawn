///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/FontCollectionLookupEntry.h>
#include <fb/String.h>
#include <fb/UIBundleAssetState.h>

namespace fb {
	class UIBundlesAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBundlesAsset"); }
		virtual ~UIBundlesAsset() override {}
		UIBundlesAsset() {
		};

		Array<UIBundleAssetState> m_uiBundleAssetStateList; // 0x18 (24)
		Array<FontCollectionLookupEntry> m_fontCollectionLookups; // 0x20 (32)
		String m_rootMovieClipPath; // 0x28 (40)
	}; // 0x30 (48)
}

