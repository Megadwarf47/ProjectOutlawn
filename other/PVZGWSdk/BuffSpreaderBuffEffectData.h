///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/CtrRef.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffSpreaderBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffSpreaderBuffEffectData"); }
		virtual ~BuffSpreaderBuffEffectData() override {}
		BuffSpreaderBuffEffectData() {
			m_period = 1.f;
			m_radius = 0.f;
			m_verticalOffset = 0.f;
			m_fieldOfView = 360.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_applicationLimit = -1;
			m_spreadOnTrigger = false;
		};

		CtrRef<BuffData> m_buff; // 0x10 (16)
		float m_period; // 0x18 (24)
		float m_radius; // 0x1C (28)
		float m_verticalOffset; // 0x20 (32)
		float m_fieldOfView; // 0x24 (36)
		float m_minPowerThreshold; // 0x28 (40)
		float m_maxPowerThreshold; // 0x2C (44)
		s32 m_applicationLimit; // 0x30 (48)
		bool m_spreadOnTrigger; // 0x34 (52)
	}; // 0x38 (56)
}

