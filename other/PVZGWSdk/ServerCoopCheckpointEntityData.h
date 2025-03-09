///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class ServerCoopCheckpointEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ServerCoopCheckpointEntityData"); }
		virtual ~ServerCoopCheckpointEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		ServerCoopCheckpointEntityData() {
			m_garden = 0;
			m_gardenDamage = 0.f;
		};

		String m_wave; // 0x18 (24)
		s32 m_garden; // 0x20 (32)
		float m_gardenDamage; // 0x24 (36)
	}; // 0x28 (40)
}

