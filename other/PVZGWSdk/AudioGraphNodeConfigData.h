///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class AudioGraphNodeData;
}

namespace fb {
	class AudioGraphNodeConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphNodeConfigData"); }
		virtual ~AudioGraphNodeConfigData() override {}
		AudioGraphNodeConfigData() {
		};

		CtrRef<AudioGraphNodeData> m_node; // 0x10 (16)
	}; // 0x18 (24)
}

