///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeConfigData.h>
#include <fb/RefArray.h>

namespace fb {
	class MixerEntryConfig;
}

namespace fb {
	class MixerSendNodeConfigData : public AudioGraphNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerSendNodeConfigData"); }
		virtual ~MixerSendNodeConfigData() override {}
		MixerSendNodeConfigData() {
		};

		RefArray<MixerEntryConfig> m_entryConfigs; // 0x18 (24)
	}; // 0x20 (32)
}

