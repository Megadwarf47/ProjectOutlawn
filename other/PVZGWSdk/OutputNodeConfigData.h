///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/AudioGraphNodeConfigData.h>
#include <fb/CtrRef.h>

namespace fb {
	class MixGroup;
}

namespace fb {
	class OutputNodeConfigData : public AudioGraphNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OutputNodeConfigData"); }
		virtual ~OutputNodeConfigData() override {}
		OutputNodeConfigData() {
			m_minDistance = 1.f;
			m_hfDampingDistance = 1.f;
			m_hfDampingObstruction = 1.f;
			m_hfDampingOcclusion = 1.f;
			m_gain = 0.f;
			m_enableHdr = true;
		};

		float m_minDistance; // 0x18 (24)
		AudioCurve m_attenuationCurve; // 0x20 (32)
		float m_hfDampingDistance; // 0x30 (48)
		float m_hfDampingObstruction; // 0x34 (52)
		float m_hfDampingOcclusion; // 0x38 (56)
		float m_gain; // 0x3C (60)
		CtrRef<MixGroup> m_mixGroup; // 0x40 (64)
		bool m_enableHdr; // 0x48 (72)
	}; // 0x50 (80)
}

