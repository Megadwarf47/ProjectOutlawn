///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/CtrRef.h>
#include <fb/OutputNodeData.h>
#include <fb/OutputReverbMode.h>
#include <fb/SoundGraphPluginRef.h>
#include <fb/Vec3.h>

namespace fb {
	class SoundBusData;
}

namespace fb {
	class ConeOutputNodeData : public OutputNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConeOutputNodeData"); }
		virtual ~ConeOutputNodeData() override {}
		ConeOutputNodeData() {
			m_outsideGain = -12.f;
			m_direction = Vec3(0.f, 1.f, 0.f);
			m_panSize = 2.f;
			m_bleedMinDistance = 2.5f;
			m_bleedMaxDistance = 3.5f;
			m_hfDampingAngle = 1.f;
			m_reverbGain = -12.f;
			m_reverbMode = OutputReverbMode::OutputReverbMode_PostGain;
		};

		AudioGraphNodePort m_positionX; // 0x80 (128)
		AudioGraphNodePort m_positionY; // 0x88 (136)
		AudioGraphNodePort m_positionZ; // 0x90 (144)
		AudioGraphNodePort m_innerAngle; // 0x98 (152)
		AudioGraphNodePort m_outerAngle; // 0xA0 (160)
		float m_outsideGain; // 0xA8 (168)
		Vec3 m_direction; // 0xB0 (176)
		float m_panSize; // 0xC0 (192)
		float m_bleedMinDistance; // 0xC4 (196)
		float m_bleedMaxDistance; // 0xC8 (200)
		AudioGraphNodePort m_centerLevel; // 0xCC (204)
		AudioGraphNodePort m_lfeLevel; // 0xD4 (212)
		float m_hfDampingAngle; // 0xDC (220)
		AudioCurve m_reverbAttenuationCurve; // 0xE0 (224)
		float m_reverbGain; // 0xF0 (240)
		OutputReverbMode m_reverbMode; // 0xF4 (244)
		CtrRef<SoundBusData> m_reverbSend; // 0xF8 (248)
		SoundGraphPluginRef m_panPlugin; // 0x100 (256)
		SoundGraphPluginRef m_reverbSendPlugin; // 0x103 (259)
	}; // 0x110 (272)
}

