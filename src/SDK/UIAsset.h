///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class UIAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAsset"); }
		virtual ~UIAsset() override {}
		UIAsset() {
			m_atlasPackSize = 1023;
			m_swfMovieResource = ;
		};

		s32 m_atlasPackSize; // 0x18 (24)
		ResourceRef m_swfMovieResource; // 0x20 (32)
	}; // 0x28 (40)
}

