///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class DefenseDropActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DefenseDropActionData"); }
		virtual ~DefenseDropActionData() override {}
		DefenseDropActionData() {
			m_actionType = CommanderActionType::CommanderActionType_DefenseDrop;
		};

	}; // 0x30 (48)
}

