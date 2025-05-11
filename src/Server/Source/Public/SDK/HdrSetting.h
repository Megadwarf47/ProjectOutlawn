///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/DataContainer.h>

namespace fb {
	class HdrSetting : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HdrSetting"); }
		virtual ~HdrSetting() override {}
		HdrSetting() {
			m_windowMinTop = 80.f;
			m_windowMinBottom = 20.f;
			m_windowTopMinReleaseTime = 0.15f;
			m_windowTopMaxReleaseTime = 1.2f;
			m_windowTopAttackTime = 0.1f;
			m_windowBottomReleaseTime = 0.1f;
			m_dischargeFactor = 3.f;
			m_maxAllowedEnergy = 100.f;
			m_windowBottomAttackTime = 0.f;
			m_windowSize = 40.f;
			m_compressFactor = 1.f;
			m_headroom = 3.f;
			m_allowedOvershoot = 6.f;
		};

		float m_windowMinTop; // 0x10 (16)
		float m_windowMinBottom; // 0x14 (20)
		float m_windowTopMinReleaseTime; // 0x18 (24)
		float m_windowTopMaxReleaseTime; // 0x1C (28)
		float m_windowTopAttackTime; // 0x20 (32)
		float m_windowBottomReleaseTime; // 0x24 (36)
		AudioCurve m_windowTopReleaseTimeCurve; // 0x28 (40)
		float m_dischargeFactor; // 0x38 (56)
		float m_maxAllowedEnergy; // 0x3C (60)
		float m_windowBottomAttackTime; // 0x40 (64)
		float m_windowSize; // 0x44 (68)
		float m_compressFactor; // 0x48 (72)
		float m_headroom; // 0x4C (76)
		float m_allowedOvershoot; // 0x50 (80)
	}; // 0x58 (88)
}

