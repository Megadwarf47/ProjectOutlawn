///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>

namespace fb {
	class OrderActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OrderActionData"); }
		virtual ~OrderActionData() override {}
		OrderActionData() {
			m_actionType = CommanderActionType::CommanderActionType_Order;
		};

	}; // 0x30 (48)
}

