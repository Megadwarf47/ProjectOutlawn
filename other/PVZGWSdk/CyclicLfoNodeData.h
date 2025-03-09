///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/LfoWaveMode.h>
#include <fb/TimeMode.h>

namespace fb {
	class CyclicLfoNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CyclicLfoNodeData"); }
		virtual ~CyclicLfoNodeData() override {}
		CyclicLfoNodeData() {
			m_timeMode = TimeMode::TimeMode_Frequency;
			m_mode = LfoWaveMode::LfoWaveMode_Sine;
		};

		AudioGraphNodePort m_start; // 0x10 (16)
		AudioGraphNodePort m_stop; // 0x18 (24)
		AudioGraphNodePort m_time; // 0x20 (32)
		AudioGraphNodePort m_amp; // 0x28 (40)
		AudioGraphNodePort m_phase; // 0x30 (48)
		AudioGraphNodePort m_min; // 0x38 (56)
		AudioGraphNodePort m_max; // 0x40 (64)
		AudioGraphNodePort m_skew; // 0x48 (72)
		AudioGraphNodePort m_tick; // 0x50 (80)
		AudioGraphNodePort m_out; // 0x58 (88)
		AudioGraphNodePort m_phaseOut; // 0x60 (96)
		AudioGraphNodePort m_delay; // 0x68 (104)
		TimeMode m_timeMode; // 0x70 (112)
		LfoWaveMode m_mode; // 0x74 (116)
	}; // 0x78 (120)
}

