///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsPropertyRelationPropertyData.h>

namespace fb {
	class MaterialRelationDamageData : public PhysicsPropertyRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationDamageData"); }
		virtual ~MaterialRelationDamageData() override {}
		MaterialRelationDamageData() {
			m_collisionDamageMultiplier = 1.f;
			m_collisionDamageThreshold = 30.f;
			m_damageProtectionMultiplier = 1.f;
			m_damagePenetrationMultiplier = 1.f;
			m_damageProtectionThreshold = 2.f;
			m_explosionCoverDamageModifier = 1.f;
			m_inflictsDemolitionDamage = true;
			m_allowClientDestruction = false;
			m_criticalDamage = false;
			m_blockedDamage = false;
		};

		float m_collisionDamageMultiplier; // 0x10 (16)
		float m_collisionDamageThreshold; // 0x14 (20)
		float m_damageProtectionMultiplier; // 0x18 (24)
		float m_damagePenetrationMultiplier; // 0x1C (28)
		float m_damageProtectionThreshold; // 0x20 (32)
		float m_explosionCoverDamageModifier; // 0x24 (36)
		bool m_inflictsDemolitionDamage; // 0x28 (40)
		bool m_allowClientDestruction; // 0x29 (41)
		bool m_criticalDamage; // 0x2A (42)
		bool m_blockedDamage; // 0x2B (43)
	}; // 0x30 (48)
}

