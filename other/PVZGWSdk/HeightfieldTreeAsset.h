///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RasterTreeAsset.h>

namespace fb {
	class HeightfieldTreeAsset : public RasterTreeAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HeightfieldTreeAsset"); }
		virtual ~HeightfieldTreeAsset() override {}
		HeightfieldTreeAsset() {
			m_minHeightWidth = 1024.f;
			m_minHeightSamplesPerSide = 64;
		};

		float m_minHeightWidth; // 0x10 (16)
		s32 m_minHeightSamplesPerSide; // 0x14 (20)
	}; // 0x18 (24)
}

