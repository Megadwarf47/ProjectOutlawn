///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/RefArray.h>

namespace fb {
	class MixerOutputEntry;
}

namespace fb {
	class MixerOutputNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerOutputNodeData"); }
		virtual ~MixerOutputNodeData() override {}
		MixerOutputNodeData() {
		};

		RefArray<MixerOutputEntry> m_entries; // 0x10 (16)
	}; // 0x18 (24)
}

