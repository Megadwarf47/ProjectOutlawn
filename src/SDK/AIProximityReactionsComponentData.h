///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIProximityReactionsBinding.h>
#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/LookAtHuman.h>

namespace fb {
	class AIProximityReactionsComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIProximityReactionsComponentData"); }
		virtual ~AIProximityReactionsComponentData() override {}
		AIProximityReactionsComponentData() {
			m_minExplosionImpulseForce = 10.f;
			m_maxExplosionLookDistance = 100.f;
			m_fireReactionDistance = 5.f;
			m_drasticAimYawAmount = 50.f;
			m_useLocalPlayer = false;
			m_enabled = true;
		};

		AIProximityReactionsBinding m_binding; // 0x70 (112)
		float m_minExplosionImpulseForce; // 0x28C (652)
		float m_maxExplosionLookDistance; // 0x290 (656)
		float m_fireReactionDistance; // 0x294 (660)
		float m_drasticAimYawAmount; // 0x298 (664)
		Array<LookAtHuman> m_lookAtHumanTiming; // 0x2A0 (672)
		bool m_useLocalPlayer; // 0x2A8 (680)
		bool m_enabled; // 0x2A9 (681)
	}; // 0x2B0 (688)
}

