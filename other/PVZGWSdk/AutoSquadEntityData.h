///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/SquadId.h>

namespace fb {
	class AutoSquadEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AutoSquadEntityData"); }
		virtual ~AutoSquadEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AutoSquadEntityData() {
			m_squadId = SquadId::Squad1;
		};

		SquadId m_squadId; // 0x18 (24)
	}; // 0x20 (32)
}

