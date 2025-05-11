///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/EBTAction.h>
#include <fb/EInteractionType.h>

namespace fb {
	class BT_DoInteraction : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoInteraction"); }
		virtual ~BT_DoInteraction() override {}
		BT_DoInteraction() {
			m_interaction = EInteractionType::EInteraction_Null;
			m_action = EBTAction::EBTAction_None;
		};

		EInteractionType m_interaction; // 0x18 (24)
		EBTAction m_action; // 0x1C (28)
	}; // 0x20 (32)
}

