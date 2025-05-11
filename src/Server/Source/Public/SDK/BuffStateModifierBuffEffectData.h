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
	class BuffStateModifierData;
}

namespace fb {
	class BuffStateModifierBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffStateModifierBuffEffectData"); }
		virtual ~BuffStateModifierBuffEffectData() override {}
		BuffStateModifierBuffEffectData() {
			m_value = 1.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		CtrRef<BuffStateModifierData> m_buffStateModifier; // 0x10 (16)
		float m_value; // 0x18 (24)
		float m_minPowerThreshold; // 0x1C (28)
		float m_maxPowerThreshold; // 0x20 (32)
	}; // 0x28 (40)
}

