///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/OutputNodeConfigData.h>

namespace fb {
	class FlatOutputNodeConfigData : public OutputNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlatOutputNodeConfigData"); }
		virtual ~FlatOutputNodeConfigData() override {}
		FlatOutputNodeConfigData() {
			m_worldAngle = 0.f;
			m_angle = 0.f;
			m_reverbGain = -12.f;
			m_isWorldAligned = false;
		};

		float m_worldAngle; // 0x50 (80)
		float m_angle; // 0x54 (84)
		AudioCurve m_reverbAttenuationCurve; // 0x58 (88)
		float m_reverbGain; // 0x68 (104)
		bool m_isWorldAligned; // 0x6C (108)
	}; // 0x70 (112)
}

