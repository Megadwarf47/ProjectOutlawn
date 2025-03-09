///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/ERandomActionType.h>

namespace fb {
	class BT_IsRandomActionChance : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsRandomActionChance"); }
		virtual ~BT_IsRandomActionChance() override {}
		BT_IsRandomActionChance() {
			m_actionType = ERandomActionType::ERandomAction_Null;
			m_behaviourRandomMin = 0.f;
			m_behaviourRandomMax = 1.f;
		};

		ERandomActionType m_actionType; // 0x20 (32)
		float m_behaviourRandomMin; // 0x24 (36)
		float m_behaviourRandomMax; // 0x28 (40)
	}; // 0x30 (48)
}

