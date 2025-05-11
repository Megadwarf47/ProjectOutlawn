///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class SequenceGeneratorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SequenceGeneratorNodeData"); }
		virtual ~SequenceGeneratorNodeData() override {}
		SequenceGeneratorNodeData() {
			m_updateValueOnEvents = false;
		};

		AudioGraphNodePort m_trigger; // 0x10 (16)
		AudioGraphNodePort m_reset; // 0x18 (24)
		AudioGraphNodePort m_min; // 0x20 (32)
		AudioGraphNodePort m_max; // 0x28 (40)
		AudioGraphNodePort m_step; // 0x30 (48)
		AudioGraphNodePort m_value; // 0x38 (56)
		bool m_updateValueOnEvents; // 0x40 (64)
	}; // 0x48 (72)
}

