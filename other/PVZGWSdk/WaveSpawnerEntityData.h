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
	class WaveComposition;
}

namespace fb {
	class WaveSpawnerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveSpawnerEntityData"); }
		virtual ~WaveSpawnerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		WaveSpawnerEntityData() {
		};

		CtrRef<WaveComposition> m_waveComposition; // 0x18 (24)
	}; // 0x20 (32)
}

