///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PVZDefenseActivationActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZDefenseActivationActionData"); }
		virtual ~PVZDefenseActivationActionData() override {}
		PVZDefenseActivationActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_DefenseActivation;
		};

	}; // 0x30 (48)
}

