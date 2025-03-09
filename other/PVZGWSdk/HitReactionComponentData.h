///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/HitReactionComponentBinding.h>

namespace fb {
	class HitReactionComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HitReactionComponentData"); }
		virtual ~HitReactionComponentData() override {}
		HitReactionComponentData() {
			m_minHitReactionWeight = 0.4f;
			m_minHitReactionWeightDamage = 5.f;
			m_maxHitReactionWeightDamage = 50.f;
			m_enabled = true;
		};

		HitReactionComponentBinding m_hitReactionBinding; // 0x70 (112)
		float m_minHitReactionWeight; // 0x138 (312)
		float m_minHitReactionWeightDamage; // 0x13C (316)
		float m_maxHitReactionWeightDamage; // 0x140 (320)
		bool m_enabled; // 0x144 (324)
	}; // 0x150 (336)
}

