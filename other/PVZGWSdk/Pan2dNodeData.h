///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/Pan2dOutputChannelCount.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class Pan2dNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Pan2dNodeData"); }
		virtual ~Pan2dNodeData() override {}
		Pan2dNodeData() {
			m_outputChannelCount = Pan2dOutputChannelCount::Pan2dOutputChannelCount_Six;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		Pan2dOutputChannelCount m_outputChannelCount; // 0x20 (32)
		AudioGraphNodePort m_panAngle; // 0x24 (36)
		AudioGraphNodePort m_panDistance; // 0x2C (44)
		AudioGraphNodePort m_panSize; // 0x34 (52)
		AudioGraphNodePort m_panTwist; // 0x3C (60)
		AudioGraphNodePort m_centerAmplitude; // 0x44 (68)
		AudioGraphNodePort m_mainAmplitude; // 0x4C (76)
		AudioGraphNodePort m_lfeAmplitude; // 0x54 (84)
		SoundGraphPluginRef m_plugin; // 0x5C (92)
	}; // 0x60 (96)
}

