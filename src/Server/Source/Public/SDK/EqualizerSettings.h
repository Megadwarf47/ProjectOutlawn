///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class EqualizerSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EqualizerSettings"); }
		virtual ~EqualizerSettings() override {}
		EqualizerSettings() {
			m_lowShelfFrequency = 400.f;
			m_lowShelfGain = 0.f;
			m_highShelfFrequency = 400.f;
			m_highShelfGain = 0.f;
			m_hpCutoffFrequency = 0.f;
		};

		float m_lowShelfFrequency; // 0x10 (16)
		float m_lowShelfGain; // 0x14 (20)
		float m_highShelfFrequency; // 0x18 (24)
		float m_highShelfGain; // 0x1C (28)
		float m_hpCutoffFrequency; // 0x20 (32)
	}; // 0x28 (40)
}

