///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class BreathControlData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BreathControlData"); }
		virtual ~BreathControlData() override {}
		BreathControlData() {
			m_breathControlTime = 5.f;
			m_breathControlReleaseTime = 5.f;
			m_breathControlPenaltyMultiplier = 2.f;
			m_breathControlPenaltyTimeout = 3.f;
		};

		float m_breathControlTime; // 0x10 (16)
		float m_breathControlReleaseTime; // 0x14 (20)
		float m_breathControlPenaltyMultiplier; // 0x18 (24)
		float m_breathControlPenaltyTimeout; // 0x1C (28)
	}; // 0x20 (32)
}

