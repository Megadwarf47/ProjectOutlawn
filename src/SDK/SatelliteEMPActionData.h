///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class SatelliteEMPActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SatelliteEMPActionData"); }
		virtual ~SatelliteEMPActionData() override {}
		SatelliteEMPActionData() {
			m_actionType = CommanderActionType::CommanderActionType_SatelliteEMP;
		};

	}; // 0x30 (48)
}

