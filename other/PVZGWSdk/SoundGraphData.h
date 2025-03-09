///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphData.h>
#include <fb/RefArray.h>
#include <fb/SoundGraphInfo.h>

namespace fb {
	class AudioGraphEvent;
	class AudioGraphParameter;
}

namespace fb {
	class SoundGraphData : public AudioGraphData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundGraphData"); }
		virtual ~SoundGraphData() override {}
		SoundGraphData() {
		};

		SoundGraphInfo m_info; // 0x38 (56)
		RefArray<AudioGraphParameter> m_inputParameters; // 0x60 (96)
		RefArray<AudioGraphParameter> m_outputParameters; // 0x68 (104)
		RefArray<AudioGraphEvent> m_inputEvents; // 0x70 (112)
		RefArray<AudioGraphEvent> m_outputEvents; // 0x78 (120)
	}; // 0x80 (128)
}

