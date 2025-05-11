///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/SoundGraphPluginRef.h>
#include <fb/VuMeterMode.h>

namespace fb {
	class VuMeterNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VuMeterNodeData"); }
		virtual ~VuMeterNodeData() override {}
		VuMeterNodeData() {
			m_mode = VuMeterMode::VuMeterMode_Rms;
			m_efficiency = 1;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		AudioGraphNodePort m_frontLeft; // 0x20 (32)
		AudioGraphNodePort m_center; // 0x28 (40)
		AudioGraphNodePort m_frontRight; // 0x30 (48)
		AudioGraphNodePort m_rearLeft; // 0x38 (56)
		AudioGraphNodePort m_rearRight; // 0x40 (64)
		AudioGraphNodePort m_lfe; // 0x48 (72)
		VuMeterMode m_mode; // 0x50 (80)
		s32 m_efficiency; // 0x54 (84)
		SoundGraphPluginRef m_plugin; // 0x58 (88)
	}; // 0x60 (96)
}

