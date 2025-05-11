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
	class ValueSelectorEntry;
}

namespace fb {
	class ValueSelectorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ValueSelectorNodeData"); }
		virtual ~ValueSelectorNodeData() override {}
		ValueSelectorNodeData() {
			m_defaultCaseValue = -1.f;
		};

		RefArray<ValueSelectorEntry> m_inputs; // 0x10 (16)
		AudioGraphNodePort m_value; // 0x18 (24)
		AudioGraphNodePort m_out; // 0x20 (32)
		float m_defaultCaseValue; // 0x28 (40)
	}; // 0x30 (48)
}

