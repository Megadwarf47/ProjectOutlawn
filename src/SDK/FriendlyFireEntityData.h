///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class FriendlyFireEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FriendlyFireEntityData"); }
		virtual ~FriendlyFireEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		FriendlyFireEntityData() {
			m_enemyCommitmentAllocation = 2.f;
			m_friendlyCommitmentAllocation = -6.f;
			m_maxCommitment = 10.f;
			m_failureThreshold = -2.f;
			m_decayRate = 0.008f;
		};

		Array<TeamId> m_teams; // 0x18 (24)
		float m_enemyCommitmentAllocation; // 0x20 (32)
		float m_friendlyCommitmentAllocation; // 0x24 (36)
		float m_maxCommitment; // 0x28 (40)
		float m_failureThreshold; // 0x2C (44)
		float m_decayRate; // 0x30 (48)
	}; // 0x38 (56)
}

