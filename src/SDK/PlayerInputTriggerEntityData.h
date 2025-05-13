///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class PlayerInputTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerInputTriggerEntityData"); }
		virtual ~PlayerInputTriggerEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlayerInputTriggerEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_entryInputActions = 899534898;
			m_valueModifier = 1.f;
			m_valueModifierForMouse = 1.f;
			m_holdDownTime = 0.f;
			m_accumulatedValueAtStart = 0.f;
			m_trailingValueAtStart = 0.f;
			m_clampValueAfterMouseModifier = true;
			m_enabledFromStart = false;
			m_sendTriggerEvents = true;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_entryInputActions; // 0x1C (28)
		float m_valueModifier; // 0x20 (32)
		float m_valueModifierForMouse; // 0x24 (36)
		float m_holdDownTime; // 0x28 (40)
		float m_accumulatedValueAtStart; // 0x2C (44)
		float m_trailingValueAtStart; // 0x30 (48)
		bool m_clampValueAfterMouseModifier; // 0x34 (52)
		bool m_enabledFromStart; // 0x35 (53)
		bool m_sendTriggerEvents; // 0x36 (54)
	}; // 0x38 (56)
}

