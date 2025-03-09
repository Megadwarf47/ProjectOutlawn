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
	class AntEnumeration;
}

namespace fb {
	class AntBindingBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntBindingBuffEffectData"); }
		virtual ~AntBindingBuffEffectData() override {}
		AntBindingBuffEffectData() {
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_spikeweeded = false;
			m_superJump = false;
			m_knockback = false;
		};

		float m_minPowerThreshold; // 0x10 (16)
		float m_maxPowerThreshold; // 0x14 (20)
		CtrRef<AntEnumeration> m_specialMode; // 0x18 (24)
		bool m_spikeweeded; // 0x20 (32)
		bool m_superJump; // 0x21 (33)
		bool m_knockback; // 0x22 (34)
	}; // 0x28 (40)
}

