///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZSelectedAISpawnerOverrideEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSelectedAISpawnerOverrideEntityData"); }
		virtual ~PVZSelectedAISpawnerOverrideEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZSelectedAISpawnerOverrideEntityData() {
		};

	}; // 0x18 (24)
}

