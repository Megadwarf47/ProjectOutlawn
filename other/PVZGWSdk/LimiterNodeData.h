///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/LimiterChannelMode.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class LimiterNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LimiterNodeData"); }
		virtual ~LimiterNodeData() override {}
		LimiterNodeData() {
			m_channelMode = LimiterChannelMode::LimiterChannelMode_Grouped;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_sidechain; // 0x18 (24)
		AudioGraphNodePort m_threshold; // 0x20 (32)
		AudioGraphNodePort m_releaseTime; // 0x28 (40)
		AudioGraphNodePort m_useSidechain; // 0x30 (48)
		AudioGraphNodePort m_out; // 0x38 (56)
		LimiterChannelMode m_channelMode; // 0x40 (64)
		SoundGraphPluginRef m_plugin; // 0x44 (68)
	}; // 0x48 (72)
}

