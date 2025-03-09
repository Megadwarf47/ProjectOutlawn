///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIAwarenessComponentBinding.h>
#include <fb/GameComponentData.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class AIAwarenessComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIAwarenessComponentData"); }
		virtual ~AIAwarenessComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AIAwarenessComponentData() {
			m_ownTargetOffset = Vec3(0.f, 1.5f, 0.f);
			m_damageInflictorTargetOffset = Vec3(0.f, 1.5f, 0.f);
			m_realm = Realm::Realm_Client;
			m_ownTargetRange = 5.f;
			m_damageInflictorTargetDuration = 2.f;
			m_minLookatSoldierDuration = 2.f;
			m_maxLookatSoldierDuration = 6.f;
			m_minIgnoreSoldierDuration = 5.f;
			m_maxIgnoreSoldierDuration = 10.f;
			m_lookAtSlerpSpeed = 4.f;
			m_hasOwnTarget = true;
		};

		Vec3 m_ownTargetOffset; // 0x70 (112)
		Vec3 m_damageInflictorTargetOffset; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		AIAwarenessComponentBinding m_binding; // 0x94 (148)
		float m_ownTargetRange; // 0xD0 (208)
		float m_damageInflictorTargetDuration; // 0xD4 (212)
		float m_minLookatSoldierDuration; // 0xD8 (216)
		float m_maxLookatSoldierDuration; // 0xDC (220)
		float m_minIgnoreSoldierDuration; // 0xE0 (224)
		float m_maxIgnoreSoldierDuration; // 0xE4 (228)
		float m_lookAtSlerpSpeed; // 0xE8 (232)
		bool m_hasOwnTarget; // 0xEC (236)
	}; // 0xF0 (240)
}

