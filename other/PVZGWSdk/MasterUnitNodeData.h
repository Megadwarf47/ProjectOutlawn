///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class MasterUnitSettings;
}

namespace fb {
	class MasterUnitNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MasterUnitNodeData"); }
		virtual ~MasterUnitNodeData() override {}
		MasterUnitNodeData() {
		};

		AudioGraphNodePort m_settingsIndex; // 0x10 (16)
		AudioGraphNodePort m_amplitude; // 0x18 (24)
		AudioGraphNodePort m_masterGain; // 0x20 (32)
		AudioGraphNodePort m_masterLfeGain; // 0x28 (40)
		AudioGraphNodePort m_masterDialogGain; // 0x30 (48)
		AudioGraphNodePort m_mainMixGain; // 0x38 (56)
		AudioGraphNodePort m_postEffectsGain; // 0x40 (64)
		AudioGraphNodePort m_reverbGain; // 0x48 (72)
		AudioGraphNodePort m_fadeTime; // 0x50 (80)
		AudioGraphNodePort m_highPassFreq; // 0x58 (88)
		AudioGraphNodePort m_lowShelfFreq; // 0x60 (96)
		AudioGraphNodePort m_lowShelfGain; // 0x68 (104)
		AudioGraphNodePort m_highShelfFreq; // 0x70 (112)
		AudioGraphNodePort m_highShelfGain; // 0x78 (120)
		AudioGraphNodePort m_compThreshold; // 0x80 (128)
		AudioGraphNodePort m_compRatio; // 0x88 (136)
		AudioGraphNodePort m_compAttack; // 0x90 (144)
		AudioGraphNodePort m_compRelease; // 0x98 (152)
		AudioGraphNodePort m_distClipLevel; // 0xA0 (160)
		AudioGraphNodePort m_parallelDistortionGain; // 0xA8 (168)
		RefArray<MasterUnitSettings> m_settings; // 0xB0 (176)
	}; // 0xB8 (184)
}

