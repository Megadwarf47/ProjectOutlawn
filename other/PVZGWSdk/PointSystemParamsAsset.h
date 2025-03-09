///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/KillStreakInfo.h>

namespace fb {
	class PointSystemParamsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PointSystemParamsAsset"); }
		virtual ~PointSystemParamsAsset() override {}
		PointSystemParamsAsset() {
			m_multiKillTimeLimit = 0.8f;
			m_timedKillStreakMinTime = 0.8f;
			m_timedKillStreakMaxTime = 3.f;
			m_dnfTimeout = 60.f;
			m_killStreakX = 6;
			m_nemesisKillX = 5;
			m_adrenalineKillHealthLimit = 0.3f;
			m_unanimousSupportThreshold = 0.f;
			m_unanimousSupportTickTime = 30.f;
		};

		float m_multiKillTimeLimit; // 0x18 (24)
		float m_timedKillStreakMinTime; // 0x1C (28)
		float m_timedKillStreakMaxTime; // 0x20 (32)
		float m_dnfTimeout; // 0x24 (36)
		u32 m_killStreakX; // 0x28 (40)
		u32 m_nemesisKillX; // 0x2C (44)
		float m_adrenalineKillHealthLimit; // 0x30 (48)
		Array<KillStreakInfo> m_killStreakThresholds; // 0x38 (56)
		float m_unanimousSupportThreshold; // 0x40 (64)
		float m_unanimousSupportTickTime; // 0x44 (68)
	}; // 0x48 (72)
}

