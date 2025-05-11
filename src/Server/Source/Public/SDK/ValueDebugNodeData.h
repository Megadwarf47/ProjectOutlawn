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
	class DebugValueInput;
}

namespace fb {
	class ValueDebugNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ValueDebugNodeData"); }
		virtual ~ValueDebugNodeData() override {}
		ValueDebugNodeData() {
			m_enabled = true;
			m_printTTY = false;
		};

		RefArray<DebugValueInput> m_values; // 0x10 (16)
		bool m_enabled; // 0x18 (24)
		bool m_printTTY; // 0x19 (25)
	}; // 0x20 (32)
}

