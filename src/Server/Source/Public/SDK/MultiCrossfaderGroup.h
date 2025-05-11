///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/FaderType.h>

namespace fb {
	class MultiCrossfaderGroup : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultiCrossfaderGroup"); }
		virtual ~MultiCrossfaderGroup() override {}
		MultiCrossfaderGroup() {
			m_fadeAmplitude = 1.f;
			m_fadeBegin = 2.f;
			m_fadeEnd = 3.f;
			m_fadeType = FaderType::FaderType_Cosine;
		};

		AudioGraphNodePort m_amplitude; // 0x10 (16)
		AudioGraphNodePort m_start; // 0x18 (24)
		AudioGraphNodePort m_stop; // 0x20 (32)
		float m_fadeAmplitude; // 0x28 (40)
		float m_fadeBegin; // 0x2C (44)
		float m_fadeEnd; // 0x30 (48)
		FaderType m_fadeType; // 0x34 (52)
	}; // 0x38 (56)
}

