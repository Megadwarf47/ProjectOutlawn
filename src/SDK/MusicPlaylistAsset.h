///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MusicBaseAsset.h>
#include <fb/MusicPlaylistType.h>
#include <fb/RefArray.h>

namespace fb {
	class MusicAsset;
	class MusicFadeData;
	class MusicInterfaceAsset;
	class MusicPlaylistSelector;
}

namespace fb {
	class MusicPlaylistAsset : public MusicBaseAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPlaylistAsset"); }
		virtual ~MusicPlaylistAsset() override {}
		MusicPlaylistAsset() {
			m_playlistType = MusicPlaylistType::MusicPlaylistType_Shuffle;
			m_minDelay = 0.f;
			m_maxDelay = 0.f;
			m_continuous = false;
			m_repeat = false;
		};

		MusicPlaylistType m_playlistType; // 0x20 (32)
		RefArray<MusicAsset> m_assets; // 0x28 (40)
		CtrRef<MusicInterfaceAsset> m_interface; // 0x30 (48)
		RefArray<MusicPlaylistSelector> m_selectors; // 0x38 (56)
		CtrRef<MusicFadeData> m_fade; // 0x40 (64)
		float m_minDelay; // 0x48 (72)
		float m_maxDelay; // 0x4C (76)
		bool m_continuous; // 0x50 (80)
		bool m_repeat; // 0x51 (81)
	}; // 0x58 (88)
}

