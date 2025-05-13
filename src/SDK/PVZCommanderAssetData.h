///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PVZCommanderActionType.h>
#include <fb/TeamId.h>

namespace fb {
	class PVZCommanderAssetData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCommanderAssetData"); }
		virtual ~PVZCommanderAssetData() override {}
		PVZCommanderAssetData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_SpotTargets;
			m_team = TeamId::TeamNeutral;
			m_enabled = false;
		};

		PVZCommanderActionType m_actionType; // 0x18 (24)
		TeamId m_team; // 0x1C (28)
		bool m_enabled; // 0x20 (32)
	}; // 0x28 (40)
}

