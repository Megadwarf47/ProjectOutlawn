///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/OutputNodeConfigData.h>
#include <fb/Vec3.h>

namespace fb {
	class ConeOutputNodeConfigData : public OutputNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConeOutputNodeConfigData"); }
		virtual ~ConeOutputNodeConfigData() override {}
		ConeOutputNodeConfigData() {
			m_direction = Vec3(0.f, 1.f, 0.f);
			m_outsideGain = -12.f;
			m_panSize = 2.f;
			m_bleedMinDistance = 2.5f;
			m_bleedMaxDistance = 3.5f;
			m_hfDampingAngle = 1.f;
			m_reverbGain = -12.f;
		};

		Vec3 m_direction; // 0x50 (80)
		float m_outsideGain; // 0x60 (96)
		float m_panSize; // 0x64 (100)
		float m_bleedMinDistance; // 0x68 (104)
		float m_bleedMaxDistance; // 0x6C (108)
		float m_hfDampingAngle; // 0x70 (112)
		AudioCurve m_reverbAttenuationCurve; // 0x78 (120)
		float m_reverbGain; // 0x88 (136)
	}; // 0x90 (144)
}

