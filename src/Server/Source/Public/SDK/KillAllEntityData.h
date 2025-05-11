///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/KillAllPlayerEnum.h>
#include <fb/TeamId.h>

namespace fb {
	class KillAllEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KillAllEntityData"); }
		virtual ~KillAllEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		KillAllEntityData() {
			m_team = TeamId::TeamNeutral;
			m_killPlayers = KillAllPlayerEnum::KillAllPlayer_Both;
		};

		TeamId m_team; // 0x18 (24)
		KillAllPlayerEnum m_killPlayers; // 0x1C (28)
	}; // 0x20 (32)
}

