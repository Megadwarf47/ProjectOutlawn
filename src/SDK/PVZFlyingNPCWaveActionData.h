///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PrefabBlueprint;
}

namespace fb {
	class PVZFlyingNPCWaveActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZFlyingNPCWaveActionData"); }
		virtual ~PVZFlyingNPCWaveActionData() override {}
		PVZFlyingNPCWaveActionData() {

			m_actionType = PVZCommanderActionType::PVZCommanderActionType_FlyingNPCWave;
		};

		CtrRef<PrefabBlueprint> m_gunshipPrefabBlueprint; // 0x30 (48)
	}; // 0x38 (56)
}

