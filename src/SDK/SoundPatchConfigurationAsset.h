///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/SoundAsset.h>

namespace fb {
	class AudioGraphNodeConfigData;
	class AudioGraphParameterConfigData;
	class MixerAsset;
	class SoundPatchAsset;
}

namespace fb {
	class SoundPatchConfigurationAsset : public SoundAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundPatchConfigurationAsset"); }
		virtual ~SoundPatchConfigurationAsset() override {}
		SoundPatchConfigurationAsset() {
			m_loudness = 0.f;
		};

		CtrRef<SoundPatchAsset> m_sound; // 0x28 (40)
		float m_loudness; // 0x30 (48)
		CtrRef<MixerAsset> m_mixer; // 0x38 (56)
		RefArray<AudioGraphNodeConfigData> m_nodeConfigs; // 0x40 (64)
		RefArray<AudioGraphParameterConfigData> m_parameterConfigs; // 0x48 (72)
	}; // 0x50 (80)
}

