///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsComponentData.h>
#include <fb/Realm.h>
#include <fb/RefArray.h>

namespace fb {
	class EffectParameter;
}

namespace fb {
	class GamePhysicsComponentData : public PhysicsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GamePhysicsComponentData"); }
		virtual ~GamePhysicsComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		GamePhysicsComponentData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		Realm m_realm; // 0x70 (112)
		RefArray<EffectParameter> m_effectParameters; // 0x78 (120)
	}; // 0x80 (128)
}

