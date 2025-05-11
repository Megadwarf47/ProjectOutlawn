///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class AudioGraphAssetParameter;
	class AudioGraphEvent;
	class AudioGraphNodeData;
	class AudioGraphParameter;
}

namespace fb {
	class AudioGraphData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphData"); }
		virtual ~AudioGraphData() override {}
		AudioGraphData() {
			m_publicValueCount = 0;
			m_valueCount = 0;
		};

		RefArray<AudioGraphNodeData> m_nodes; // 0x10 (16)
		RefArray<AudioGraphParameter> m_publicParameters; // 0x18 (24)
		RefArray<AudioGraphEvent> m_publicEvents; // 0x20 (32)
		RefArray<AudioGraphAssetParameter> m_publicAssetParameters; // 0x28 (40)
		u16 m_publicValueCount; // 0x30 (48)
		u16 m_valueCount; // 0x32 (50)
	}; // 0x38 (56)
}

