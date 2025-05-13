///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/CtrRef.h>
#include <fb/EBTAction.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BT_DoBuff : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoBuff"); }
		virtual ~BT_DoBuff() override {}
		BT_DoBuff() {
			m_action = EBTAction::EBTAction_None;
		};

		EBTAction m_action; // 0x18 (24)
		CtrRef<BuffData> m_buff; // 0x20 (32)
	}; // 0x28 (40)
}

