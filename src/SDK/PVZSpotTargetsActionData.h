///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZResurrectionActionData.h>

namespace fb {
	class PVZSpotTargetsActionData : public PVZResurrectionActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSpotTargetsActionData"); }
		virtual ~PVZSpotTargetsActionData() override {}
		PVZSpotTargetsActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_SpotTargets;
		};

	}; // 0x38 (56)
}

