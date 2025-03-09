///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MusicBaseAsset.h>
#include <fb/RefArray.h>

namespace fb {
	class MusicInterfaceAsset;
	class MusicOverlayData;
	class MusicSelector;
	class MusicStreamableData;
	class MusicTransition;
}

namespace fb {
	class MusicAsset : public MusicBaseAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicAsset"); }
		virtual ~MusicAsset() override {}
		MusicAsset() {
			m_nameHash = 0;
			m_beatsPerMinute = 0;
			m_beatsPerBar = 0;
			m_channelCount = 0;
			m_overlayChannelCount = 0;
			m_voicePriority = 0;
		};

		CtrRef<MusicInterfaceAsset> m_interface; // 0x20 (32)
		u32 m_nameHash; // 0x28 (40)
		u32 m_beatsPerMinute; // 0x2C (44)
		u32 m_beatsPerBar; // 0x30 (48)
		RefArray<MusicStreamableData> m_playables; // 0x38 (56)
		RefArray<MusicOverlayData> m_overlays; // 0x40 (64)
		RefArray<MusicSelector> m_selectors; // 0x48 (72)
		CtrRef<MusicSelector> m_defaultSelector; // 0x50 (80)
		RefArray<MusicTransition> m_fallbackTransitions; // 0x58 (88)
		u8 m_channelCount; // 0x60 (96)
		u8 m_overlayChannelCount; // 0x61 (97)
		u8 m_voicePriority; // 0x62 (98)
	}; // 0x68 (104)
}

