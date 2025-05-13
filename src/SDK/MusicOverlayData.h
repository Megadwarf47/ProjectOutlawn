///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MusicOverlayVariation.h>
#include <fb/MusicPlayableData.h>

namespace fb {
	class MusicOverlayData : public MusicPlayableData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicOverlayData"); }
		virtual ~MusicOverlayData() override {}
		MusicOverlayData() {
		};

		Array<MusicOverlayVariation> m_variations; // 0x38 (56)
	}; // 0x40 (64)
}

