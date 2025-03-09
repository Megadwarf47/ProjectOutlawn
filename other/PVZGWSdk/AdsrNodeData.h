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
	class AdsrNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AdsrNodeData"); }
		virtual ~AdsrNodeData() override {}
		AdsrNodeData() {
			m_scale = 1.f;
		};

		AudioGraphNodePort m_trigger; // 0x10 (16)
		AudioGraphNodePort m_release; // 0x18 (24)
		AudioGraphNodePort m_a; // 0x20 (32)
		AudioGraphNodePort m_d; // 0x28 (40)
		AudioGraphNodePort m_s; // 0x30 (48)
		AudioGraphNodePort m_r; // 0x38 (56)
		AudioGraphNodePort m_value; // 0x40 (64)
		AudioGraphNodePort m_finished; // 0x48 (72)
		float m_scale; // 0x50 (80)
	}; // 0x58 (88)
}

