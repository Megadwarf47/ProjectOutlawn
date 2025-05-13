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
	class RewardDestructibleSpawnData;
}

namespace fb {
	class RewardDestructibleSpawnEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RewardDestructibleSpawnEntityData"); }
		virtual ~RewardDestructibleSpawnEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		RewardDestructibleSpawnEntityData() {
			m_isManagedByWave = true;
			m_isVaseOnly = false;
			m_isTransmitterOnly = false;
		};

		CtrRef<RewardDestructibleSpawnData> m_destructibleSpawnInfo; // 0x18 (24)
		bool m_isManagedByWave; // 0x20 (32)
		bool m_isVaseOnly; // 0x21 (33)
		bool m_isTransmitterOnly; // 0x22 (34)
	}; // 0x28 (40)
}

