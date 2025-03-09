///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class ProxyAttackActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProxyAttackActionData"); }
		virtual ~ProxyAttackActionData() override {}
		ProxyAttackActionData() {
			m_actionType = CommanderActionType::CommanderActionType_ProxyAttack;
		};

	}; // 0x30 (48)
}

