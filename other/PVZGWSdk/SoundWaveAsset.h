///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/SoundDataAsset.h>
#include <fb/SoundWaveLocalizationInfo.h>
#include <fb/SoundWaveRuntimeVariation.h>
#include <fb/SoundWaveSubtitle.h>
#include <fb/SoundWaveVariationSegment.h>
#include <fb/SoundWaveVariationSelection.h>

namespace fb {
	class StreamPoolAsset;
}

namespace fb {
	class SoundWaveAsset : public SoundDataAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundWaveAsset"); }
		virtual ~SoundWaveAsset() override {}
		SoundWaveAsset() {
			m_selection = SoundWaveVariationSelection::SoundWaveVariationSelection_Random;
			m_seekable = false;
			m_persistentVariationCount = 0;
			m_preferAvailableVariations = true;
			m_randomPersistentVariations = false;
			m_streamingMode = 0;
			m_channelCount = 0;
			m_voicePriority = 0;
		};

		Array<SoundWaveRuntimeVariation> m_runtimeVariations; // 0x30 (48)
		Array<SoundWaveLocalizationInfo> m_localization; // 0x38 (56)
		Array<String> m_subtitleStringIds; // 0x40 (64)
		Array<SoundWaveSubtitle> m_subtitles; // 0x48 (72)
		SoundWaveVariationSelection m_selection; // 0x50 (80)
		CtrRef<StreamPoolAsset> m_streamPool; // 0x58 (88)
		Array<SoundWaveVariationSegment> m_segments; // 0x60 (96)
		bool m_seekable; // 0x68 (104)
		u8 m_persistentVariationCount; // 0x69 (105)
		bool m_preferAvailableVariations; // 0x6A (106)
		bool m_randomPersistentVariations; // 0x6B (107)
		u8 m_streamingMode; // 0x6C (108)
		u8 m_channelCount; // 0x6D (109)
		u8 m_voicePriority; // 0x6E (110)
	}; // 0x70 (112)
}

