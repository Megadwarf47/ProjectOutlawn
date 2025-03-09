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
#include <fb/RangeMapperEntry.h>

namespace fb {
	class RangeMapperNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RangeMapperNodeData"); }
		virtual ~RangeMapperNodeData() override {}
		RangeMapperNodeData() {
			m_defaultOutputValue = 0.f;
			m_defaultOutputValueEnabled = true;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		Array<RangeMapperEntry> m_ranges; // 0x20 (32)
		float m_defaultOutputValue; // 0x28 (40)
		bool m_defaultOutputValueEnabled; // 0x2C (44)
	}; // 0x30 (48)
}

