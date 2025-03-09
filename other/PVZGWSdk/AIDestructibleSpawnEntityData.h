///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class AIDestructibleSpawnData;
}

namespace fb {
	class AIDestructibleSpawnEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDestructibleSpawnEntityData"); }
		virtual ~AIDestructibleSpawnEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AIDestructibleSpawnEntityData() {
			m_isManagedByWave = true;
			m_isVaseOnly = false;
			m_isTransmitterOnly = false;
			m_takePendingSpawnIntoAccount = false;
		};

		CtrRef<AIDestructibleSpawnData> m_destructibleSpawnInfo; // 0x18 (24)
		bool m_isManagedByWave; // 0x20 (32)
		bool m_isVaseOnly; // 0x21 (33)
		bool m_isTransmitterOnly; // 0x22 (34)
		bool m_takePendingSpawnIntoAccount; // 0x23 (35)
	}; // 0x28 (40)
}

