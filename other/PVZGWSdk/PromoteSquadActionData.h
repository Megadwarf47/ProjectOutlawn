///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class PromoteSquadActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PromoteSquadActionData"); }
		virtual ~PromoteSquadActionData() override {}
		PromoteSquadActionData() {
			m_scoreAmount = 10;

			m_actionType = CommanderActionType::CommanderActionType_PromoteSquad;
		};

		s32 m_scoreAmount; // 0x30 (48)
	}; // 0x38 (56)
}

