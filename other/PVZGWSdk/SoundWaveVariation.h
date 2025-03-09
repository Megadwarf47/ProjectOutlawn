///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/SoundWaveSubtitle.h>
#include <fb/SoundWaveVariationSegment.h>

namespace fb {
	class SoundWaveVariation : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundWaveVariation"); }
		virtual ~SoundWaveVariation() override {}
		SoundWaveVariation() {
			m_persistentDataSize = 0;
			m_chunkIndex = 0;
			m_firstLoopSegmentIndex = 0;
			m_lastLoopSegmentIndex = 0;
		};

		Array<SoundWaveSubtitle> m_subtitles; // 0x10 (16)
		Array<SoundWaveVariationSegment> m_segments; // 0x18 (24)
		u32 m_persistentDataSize; // 0x20 (32)
		u8 m_chunkIndex; // 0x24 (36)
		u8 m_firstLoopSegmentIndex; // 0x25 (37)
		u8 m_lastLoopSegmentIndex; // 0x26 (38)
	}; // 0x28 (40)
}

