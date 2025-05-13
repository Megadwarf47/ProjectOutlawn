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
	class RandomEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomEventEntityData"); }
		virtual ~RandomEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RandomEventEntityData() {
			m_realm = Realm::Realm_Client;
			m_probability = 50;
			m_randomizeFirstOnly = false;
			m_autoStart = false;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_probability; // 0x1C (28)
		bool m_randomizeFirstOnly; // 0x20 (32)
		bool m_autoStart; // 0x21 (33)
	}; // 0x28 (40)
}

