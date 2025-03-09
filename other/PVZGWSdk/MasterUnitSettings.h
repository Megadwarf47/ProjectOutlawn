///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class CompressorSettings;
	class EqualizerSettings;
}

namespace fb {
	class MasterUnitSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MasterUnitSettings"); }
		virtual ~MasterUnitSettings() override {}
		MasterUnitSettings() {
			m_masterVolume = 0.f;
			m_masterLfeGain = 0.f;
			m_masterDialogGain = 0.f;
			m_reverbVolume = -6.f;
			m_mainMixVolume = 0.f;
			m_distortionClipLevel = 12.f;
			m_parallelDistortionGain = 0.f;
			m_postEffectsGain = 0.f;
			m_fadeTime = 0.1f;
		};

		String m_name; // 0x10 (16)
		CtrRef<EqualizerSettings> m_equalizer; // 0x18 (24)
		CtrRef<CompressorSettings> m_compressor; // 0x20 (32)
		float m_masterVolume; // 0x28 (40)
		float m_masterLfeGain; // 0x2C (44)
		float m_masterDialogGain; // 0x30 (48)
		float m_reverbVolume; // 0x34 (52)
		float m_mainMixVolume; // 0x38 (56)
		float m_distortionClipLevel; // 0x3C (60)
		float m_parallelDistortionGain; // 0x40 (64)
		float m_postEffectsGain; // 0x44 (68)
		float m_fadeTime; // 0x48 (72)
	}; // 0x50 (80)
}

