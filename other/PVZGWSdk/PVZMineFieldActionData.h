///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PVZMineFieldActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZMineFieldActionData"); }
		virtual ~PVZMineFieldActionData() override {}
		PVZMineFieldActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_MineField;
		};

	}; // 0x30 (48)
}

