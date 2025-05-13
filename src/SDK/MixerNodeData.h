///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class MixerEntry;
}

namespace fb {
	class MixerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerNodeData"); }
		virtual ~MixerNodeData() override {}
		MixerNodeData() {
		};

		RefArray<MixerEntry> m_entries; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
	}; // 0x20 (32)
}

