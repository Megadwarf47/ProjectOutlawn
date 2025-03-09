///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZResurrectionActionData.h>

namespace fb {
	class PVZHealingActionData : public PVZResurrectionActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZHealingActionData"); }
		virtual ~PVZHealingActionData() override {}
		PVZHealingActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_Healing;
		};

	}; // 0x38 (56)
}

