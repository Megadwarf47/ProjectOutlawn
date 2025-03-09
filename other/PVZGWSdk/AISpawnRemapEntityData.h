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
	class AISpawnDataRemap;
}

namespace fb {
	class AISpawnRemapEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AISpawnRemapEntityData"); }
		virtual ~AISpawnRemapEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AISpawnRemapEntityData() {
		};

		CtrRef<AISpawnDataRemap> m_remapValues; // 0x18 (24)
	}; // 0x20 (32)
}

