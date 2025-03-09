///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PVZAntiCommanderActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZAntiCommanderActionData"); }
		virtual ~PVZAntiCommanderActionData() override {}
		PVZAntiCommanderActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_AntiCommander;
		};

	}; // 0x30 (48)
}

