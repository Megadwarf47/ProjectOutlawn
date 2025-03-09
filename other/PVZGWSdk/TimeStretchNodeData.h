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
#include <fb/TimeStretchEfficiency.h>
#include <fb/TimeStretchMultiChannelMode.h>

namespace fb {
	class TimeStretchNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimeStretchNodeData"); }
		virtual ~TimeStretchNodeData() override {}
		TimeStretchNodeData() {
			m_windowSize = 9.f;
			m_multiChannelMode = TimeStretchMultiChannelMode::TimeStretchMultiChannelMode_IndependentChannels;
			m_efficiency = TimeStretchEfficiency::TimeStretchEfficiency_6;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		float m_windowSize; // 0x20 (32)
		TimeStretchMultiChannelMode m_multiChannelMode; // 0x24 (36)
		TimeStretchEfficiency m_efficiency; // 0x28 (40)
		AudioGraphNodePort m_stretchRatio; // 0x2C (44)
		SoundGraphPluginRef m_plugin; // 0x34 (52)
	}; // 0x38 (56)
}

