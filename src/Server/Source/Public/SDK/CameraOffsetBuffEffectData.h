///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/Vec4.h>

namespace fb {
	class CameraOffsetBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraOffsetBuffEffectData"); }
		virtual ~CameraOffsetBuffEffectData() override {}
		CameraOffsetBuffEffectData() {
			m_rotation = 0.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_targetMeleeAttacker = false;
		};

		float m_rotation; // 0x10 (16)
		float m_minPowerThreshold; // 0x14 (20)
		Vec4 m_offset; // 0x20 (32)
		float m_maxPowerThreshold; // 0x30 (48)
		bool m_targetMeleeAttacker; // 0x34 (52)
	}; // 0x40 (64)
}

