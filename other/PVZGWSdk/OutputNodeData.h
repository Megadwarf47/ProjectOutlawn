///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/OutputTransformSource.h>
#include <fb/SoundGraphPluginRef.h>
#include <fb/String.h>

namespace fb {
	class MixGroup;
	class SoundBusData;
}

namespace fb {
	class OutputNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OutputNodeData"); }
		virtual ~OutputNodeData() override {}
		OutputNodeData() {
			m_minDistance = 1.f;
			m_hfDampingDistance = 1.f;
			m_hfDampingObstruction = 1.f;
			m_hfDampingOcclusion = 1.f;
			m_gain = 0.f;
			m_transformSource = OutputTransformSource::OutputTransformSource_Sound;
			m_outputNameHash = 0;
			m_solo = false;
			m_enableHdr = true;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_bypassHeadroom; // 0x18 (24)
		float m_minDistance; // 0x20 (32)
		AudioCurve m_attenuationCurve; // 0x28 (40)
		float m_hfDampingDistance; // 0x38 (56)
		float m_hfDampingObstruction; // 0x3C (60)
		float m_hfDampingOcclusion; // 0x40 (64)
		float m_gain; // 0x44 (68)
		CtrRef<SoundBusData> m_mainSend; // 0x48 (72)
		OutputTransformSource m_transformSource; // 0x50 (80)
		String m_outputName; // 0x58 (88)
		u32 m_outputNameHash; // 0x60 (96)
		CtrRef<MixGroup> m_mixGroup; // 0x68 (104)
		bool m_solo; // 0x70 (112)
		bool m_enableHdr; // 0x71 (113)
		SoundGraphPluginRef m_lowPassPlugin; // 0x72 (114)
		SoundGraphPluginRef m_vuPlugin; // 0x75 (117)
		SoundGraphPluginRef m_mainSendPlugin; // 0x78 (120)
	}; // 0x80 (128)
}

