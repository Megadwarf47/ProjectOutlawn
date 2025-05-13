///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/CtrRef.h>
#include <fb/Vec3.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffSpreaderTrapezoidBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffSpreaderTrapezoidBuffEffectData"); }
		virtual ~BuffSpreaderTrapezoidBuffEffectData() override {}
		BuffSpreaderTrapezoidBuffEffectData() {
			m_period = 1.f;
			m_length = 0.f;
			m_nearWidth = 0.f;
			m_farWidth = 0.f;
			m_maxYDifference = 0.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		CtrRef<BuffData> m_buff; // 0x10 (16)
		float m_period; // 0x18 (24)
		Vec3 m_offset; // 0x20 (32)
		float m_length; // 0x30 (48)
		float m_nearWidth; // 0x34 (52)
		float m_farWidth; // 0x38 (56)
		float m_maxYDifference; // 0x3C (60)
		float m_minPowerThreshold; // 0x40 (64)
		float m_maxPowerThreshold; // 0x44 (68)
	}; // 0x50 (80)
}

