///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MusicPhraseSelectionType.h>
#include <fb/MusicStreamableData.h>
#include <fb/RefArray.h>

namespace fb {
	class MusicFadeData;
	class MusicParameterData;
	class MusicStreamableData;
}

namespace fb {
	class MusicPhraseData : public MusicStreamableData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPhraseData"); }
		virtual ~MusicPhraseData() override {}
		MusicPhraseData() {
			m_selectionType = MusicPhraseSelectionType::MusicPhraseSelectionType_Sequential;
			m_restartIfAlreadyPlaying = false;
		};

		MusicPhraseSelectionType m_selectionType; // 0x50 (80)
		CtrRef<MusicParameterData> m_selectionParameter; // 0x58 (88)
		CtrRef<MusicFadeData> m_rangeFade; // 0x60 (96)
		RefArray<MusicStreamableData> m_playables; // 0x68 (104)
		bool m_restartIfAlreadyPlaying; // 0x70 (112)
	}; // 0x78 (120)
}

