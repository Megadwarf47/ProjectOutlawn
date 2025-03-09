///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/ETacticType.h>

namespace fb {
	class BT_IsTacticOfType : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsTacticOfType"); }
		virtual ~BT_IsTacticOfType() override {}
		BT_IsTacticOfType() {
			m_tactic = ETacticType::ETactic_Null;
		};

		ETacticType m_tactic; // 0x20 (32)
	}; // 0x28 (40)
}

