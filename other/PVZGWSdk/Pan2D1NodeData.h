///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/Pan2D1OutputChannelCount.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class Pan2D1NodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Pan2D1NodeData"); }
		virtual ~Pan2D1NodeData() override {}
		Pan2D1NodeData() {
			m_outputChannelCount = Pan2D1OutputChannelCount::SameAsInput;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		Pan2D1OutputChannelCount m_outputChannelCount; // 0x20 (32)
		AudioGraphNodePort m_panAngle; // 0x24 (36)
		AudioGraphNodePort m_panDistance; // 0x2C (44)
		AudioGraphNodePort m_panSize; // 0x34 (52)
		AudioGraphNodePort m_panTwist; // 0x3C (60)
		AudioGraphNodePort m_centerLevel; // 0x44 (68)
		AudioGraphNodePort m_lfeLevel; // 0x4C (76)
		SoundGraphPluginRef m_plugin; // 0x54 (84)
	}; // 0x58 (88)
}

