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
	class LfoNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LfoNodeData"); }
		virtual ~LfoNodeData() override {}
		LfoNodeData() {
			m_min = 0.f;
			m_max = 1.f;
			m_startAtRandomValue = false;
		};

		AudioGraphNodePort m_hz; // 0x10 (16)
		AudioGraphNodePort m_amplitude; // 0x18 (24)
		AudioGraphNodePort m_out; // 0x20 (32)
		float m_min; // 0x28 (40)
		float m_max; // 0x2C (44)
		bool m_startAtRandomValue; // 0x30 (48)
	}; // 0x38 (56)
}

