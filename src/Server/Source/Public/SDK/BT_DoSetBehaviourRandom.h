///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>

namespace fb {
	class BT_DoSetBehaviourRandom : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoSetBehaviourRandom"); }
		virtual ~BT_DoSetBehaviourRandom() override {}
		BT_DoSetBehaviourRandom() {
			m_min = 0.f;
			m_max = 1.f;
			m_timeToNextRandom = 5.f;
		};

		float m_min; // 0x18 (24)
		float m_max; // 0x1C (28)
		float m_timeToNextRandom; // 0x20 (32)
	}; // 0x28 (40)
}

