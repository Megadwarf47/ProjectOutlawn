///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/VoiceOverManuscriptLanguageColumns.h>
#include <fb/VoiceOverWaveNameTranslation.h>

namespace fb {
	class AudioLanguage;
	class VoiceOverLanguageRoot;
}

namespace fb {
	class VoiceOverManuscriptAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverManuscriptAsset"); }
		virtual ~VoiceOverManuscriptAsset() override {}
		VoiceOverManuscriptAsset() {
			m_nameTranslation = VoiceOverWaveNameTranslation::VoiceOverWaveNameTranslation_FullName;
			m_variationUnderscoreCount = 1;
			m_firstContentRow = 2;
			m_keepPath = false;
			m_stringIdUpperCase = true;
			m_allowDelete = false;
			m_enableSubtitles = true;
		};

		CtrRef<AudioLanguage> m_masterLanguage; // 0x18 (24)
		RefArray<VoiceOverLanguageRoot> m_languages; // 0x20 (32)
		VoiceOverWaveNameTranslation m_nameTranslation; // 0x28 (40)
		u32 m_variationUnderscoreCount; // 0x2C (44)
		String m_stringIdColumn; // 0x30 (48)
		String m_fileNameColumn; // 0x38 (56)
		String m_pathColumn; // 0x40 (64)
		String m_waveAssetStatusColumn; // 0x48 (72)
		String m_sheetName; // 0x50 (80)
		String m_voiceColumn; // 0x58 (88)
		String m_characterColumn; // 0x60 (96)
		Array<VoiceOverManuscriptLanguageColumns> m_languageColumns; // 0x68 (104)
		s32 m_firstContentRow; // 0x70 (112)
		String m_stringIdPrefix; // 0x78 (120)
		String m_outputPath; // 0x80 (128)
		bool m_keepPath; // 0x88 (136)
		bool m_stringIdUpperCase; // 0x89 (137)
		bool m_allowDelete; // 0x8A (138)
		bool m_enableSubtitles; // 0x8B (139)
	}; // 0x90 (144)
}

