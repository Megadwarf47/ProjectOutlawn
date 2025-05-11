///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/SoundGraphPluginRef.h>
#include <fb/String.h>

namespace fb {
	class SoundBusData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundBusData"); }
		virtual ~SoundBusData() override {}
		SoundBusData() {
			m_channelCount = 1;
		};

		String m_busName; // 0x10 (16)
		u8 m_channelCount; // 0x18 (24)
		SoundGraphPluginRef m_submixPlugin; // 0x19 (25)
	}; // 0x20 (32)
}

