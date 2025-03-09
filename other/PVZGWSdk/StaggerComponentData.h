///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/StaggerComponentBinding.h>

namespace fb {
	class StaggerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaggerComponentData"); }
		virtual ~StaggerComponentData() override {}
		StaggerComponentData() {
			m_damageThreshold = 40.f;
			m_duration = 3.f;
			m_damageDuration = 0.5f;
			m_decayRate = 0.2f;
			m_decayAmount = 10.f;
			m_speed = 3.f;
			m_movementDuration = 0.5f;
			m_resetDamageDuringStagger = true;
		};

		StaggerComponentBinding m_staggerAnimationBinding; // 0x70 (112)
		float m_damageThreshold; // 0x84 (132)
		float m_duration; // 0x88 (136)
		float m_damageDuration; // 0x8C (140)
		float m_decayRate; // 0x90 (144)
		float m_decayAmount; // 0x94 (148)
		float m_speed; // 0x98 (152)
		float m_movementDuration; // 0x9C (156)
		bool m_resetDamageDuringStagger; // 0xA0 (160)
	}; // 0xB0 (176)
}

