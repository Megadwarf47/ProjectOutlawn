///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class ReinforceSquadActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ReinforceSquadActionData"); }
		virtual ~ReinforceSquadActionData() override {}
		ReinforceSquadActionData() {
			m_reinforceDuration = 60.f;

			m_actionType = CommanderActionType::CommanderActionType_ReinforceSquad;
		};

		float m_reinforceDuration; // 0x30 (48)
	}; // 0x38 (56)
}

