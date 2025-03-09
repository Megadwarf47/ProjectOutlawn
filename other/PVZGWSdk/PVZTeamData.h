///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AISpawnableData.h>
#include <fb/Array.h>
#include <fb/TeamData.h>

namespace fb {
	class PVZTeamData : public TeamData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZTeamData"); }
		virtual ~PVZTeamData() override {}
		PVZTeamData() {
		};

		Array<AISpawnableData> m_aiSpawnerConsumables; // 0x30 (48)
	}; // 0x38 (56)
}

