///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/ModifierEuler.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class EulerTransformEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EulerTransformEntityData"); }
		virtual ~EulerTransformEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EulerTransformEntityData() {
			m_realm = Realm::Realm_Client;
			m_rotation = 0.f;
			m_euler = ModifierEuler::Roll;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_trans; // 0x20 (32)
		float m_rotation; // 0x30 (48)
		ModifierEuler m_euler; // 0x34 (52)
	}; // 0x40 (64)
}

