///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class InterpolationManagerSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InterpolationManagerSettings"); }
		virtual ~InterpolationManagerSettings() override {}
		InterpolationManagerSettings() {
			m_timeNudgePIDConstKPos = 2.f;
			m_timeNudgePIDConstKNeg = 0.5f;
			m_timeNudgePIDConstTIPos = 0.2f;
			m_timeNudgePIDConstTINeg = 0.2f;
			m_timeNudgePIDConstTDPos = 0.025f;
			m_timeNudgePIDConstTDNeg = 0.0125f;
			m_timeNudgePIDLatencyTol = 0.01f;
			m_timeNudgePIDPacketDeltaTimeTol = 0.01f;
			m_timeNudgePIDIncreaseDueToMissingPacket = 0.2f;
			m_timeNudgePIDMaxChangePerSec = 0.9f;
			m_enableTimeNudgePIDRegulator = true;
		};

		float m_timeNudgePIDConstKPos; // 0x10 (16)
		float m_timeNudgePIDConstKNeg; // 0x14 (20)
		float m_timeNudgePIDConstTIPos; // 0x18 (24)
		float m_timeNudgePIDConstTINeg; // 0x1C (28)
		float m_timeNudgePIDConstTDPos; // 0x20 (32)
		float m_timeNudgePIDConstTDNeg; // 0x24 (36)
		float m_timeNudgePIDLatencyTol; // 0x28 (40)
		float m_timeNudgePIDPacketDeltaTimeTol; // 0x2C (44)
		float m_timeNudgePIDIncreaseDueToMissingPacket; // 0x30 (48)
		float m_timeNudgePIDMaxChangePerSec; // 0x34 (52)
		bool m_enableTimeNudgePIDRegulator; // 0x38 (56)
	}; // 0x40 (64)
}

