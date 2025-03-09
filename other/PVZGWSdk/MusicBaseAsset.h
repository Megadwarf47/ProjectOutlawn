///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class MusicBaseAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicBaseAsset"); }
		virtual ~MusicBaseAsset() override {}
		MusicBaseAsset() {
			m_maxOverlayCount = 1;
		};

		u32 m_maxOverlayCount; // 0x18 (24)
	}; // 0x20 (32)
}

