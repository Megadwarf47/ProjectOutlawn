///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/SoundGraphAsset.h>

namespace fb {
	class AudioGraphEvent;
	class AudioGraphNodeData;
}

namespace fb {
	class SoundPatchAsset : public SoundGraphAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundPatchAsset"); }
		virtual ~SoundPatchAsset() override {}
		SoundPatchAsset() {
			m_loudness = 80.f;
			m_aiLoudness = -1.f;
			m_radius = 0.5f;
			m_dopplerFactor = 1.f;
			m_masterPitch = 1.f;
			m_isLooping = false;
			m_isPersistent = false;
		};

		RefArray<AudioGraphNodeData> m_outputNodes; // 0x38 (56)
		float m_loudness; // 0x40 (64)
		float m_aiLoudness; // 0x44 (68)
		float m_radius; // 0x48 (72)
		float m_dopplerFactor; // 0x4C (76)
		float m_masterPitch; // 0x50 (80)
		CtrRef<AudioGraphEvent> m_defaultStartEvent; // 0x58 (88)
		CtrRef<AudioGraphEvent> m_defaultStopEvent; // 0x60 (96)
		CtrRef<AudioGraphEvent> m_defaultEnterScopeEvent; // 0x68 (104)
		CtrRef<AudioGraphEvent> m_defaultForceInitEvent; // 0x70 (112)
		bool m_isLooping; // 0x78 (120)
		bool m_isPersistent; // 0x79 (121)
	}; // 0x80 (128)
}

