///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class AudioLanguage;
	class AudioLanguageSetting;
	class HdrSetting;
	class MixerSystemAsset;
	class SoundDataPolicy;
	class SoundMasterPatchAsset;
	class SoundScopeData;
	class SoundScopeSetupData;
	class SoundScopeStrategyData;
	class SoundTestAsset;
	class StreamPoolPreset;
}

namespace fb {
	class AudioSystemAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioSystemAsset"); }
		virtual ~AudioSystemAsset() override {}
		AudioSystemAsset() {
			m_sampleRate = 48000;
		};

		CtrRef<SoundMasterPatchAsset> m_masterPatch; // 0x18 (24)
		RefArray<StreamPoolPreset> m_streamPoolPresets; // 0x20 (32)
		CtrRef<StreamPoolPreset> m_defaultStreamPoolPreset; // 0x28 (40)
		RefArray<SoundDataPolicy> m_dataPolicies; // 0x30 (48)
		u32 m_sampleRate; // 0x38 (56)
		CtrRef<SoundTestAsset> m_tests; // 0x40 (64)
		CtrRef<MixerSystemAsset> m_mixerSystem; // 0x48 (72)
		RefArray<AudioLanguage> m_languages; // 0x50 (80)
		RefArray<AudioLanguageSetting> m_languageSettings; // 0x58 (88)
		CtrRef<AudioLanguage> m_defaultLanguage; // 0x60 (96)
		RefArray<SoundScopeData> m_scopes; // 0x68 (104)
		RefArray<SoundScopeStrategyData> m_scopeStrategies; // 0x70 (112)
		RefArray<SoundScopeSetupData> m_scopeSetups; // 0x78 (120)
		RefArray<HdrSetting> m_hdrSettings; // 0x80 (128)
		CtrRef<HdrSetting> m_defaultHdrSetting; // 0x88 (136)
	}; // 0x90 (144)
}

