///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZResurrectionActionData.h>

namespace fb {
	class PVZSupplyDropsActionData : public PVZResurrectionActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSupplyDropsActionData"); }
		virtual ~PVZSupplyDropsActionData() override {}
		PVZSupplyDropsActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_SupplyDrops;
		};

	}; // 0x38 (56)
}

