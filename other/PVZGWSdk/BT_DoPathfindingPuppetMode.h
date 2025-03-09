///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/EBTAction.h>

namespace fb {
	class BT_DoPathfindingPuppetMode : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoPathfindingPuppetMode"); }
		virtual ~BT_DoPathfindingPuppetMode() override {}
		BT_DoPathfindingPuppetMode() {
			m_action = EBTAction::EBTAction_None;
		};

		EBTAction m_action; // 0x18 (24)
	}; // 0x20 (32)
}

