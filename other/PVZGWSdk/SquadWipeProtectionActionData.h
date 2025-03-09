///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class SquadWipeProtectionActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SquadWipeProtectionActionData"); }
		virtual ~SquadWipeProtectionActionData() override {}
		SquadWipeProtectionActionData() {
			m_actionType = CommanderActionType::CommanderActionType_SquadWipeProtection;
		};

	}; // 0x30 (48)
}

