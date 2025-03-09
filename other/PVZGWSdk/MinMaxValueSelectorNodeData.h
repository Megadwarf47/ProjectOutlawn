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
	class MinMaxValueSelectorEntry;
}

namespace fb {
	class MinMaxValueSelectorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MinMaxValueSelectorNodeData"); }
		virtual ~MinMaxValueSelectorNodeData() override {}
		MinMaxValueSelectorNodeData() {
		};

		RefArray<MinMaxValueSelectorEntry> m_inputs; // 0x10 (16)
		AudioGraphNodePort m_maxValue; // 0x18 (24)
		AudioGraphNodePort m_maxIndex; // 0x20 (32)
		AudioGraphNodePort m_minValue; // 0x28 (40)
		AudioGraphNodePort m_minIndex; // 0x30 (48)
	}; // 0x38 (56)
}

