///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class SimpleValueSelectorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleValueSelectorNodeData"); }
		virtual ~SimpleValueSelectorNodeData() override {}
		SimpleValueSelectorNodeData() {
		};

		Array<float> m_outValues; // 0x10 (16)
		AudioGraphNodePort m_index; // 0x18 (24)
		AudioGraphNodePort m_out; // 0x20 (32)
	}; // 0x28 (40)
}

