///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/PriorityTypeList.h>

namespace fb {
	class TargetEvaluationConstantData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TargetEvaluationConstantData"); }
		virtual ~TargetEvaluationConstantData() override {}
		TargetEvaluationConstantData() {
			m_defaultHumanTargetPreference = 1.1f;
			m_targetFlipFactorUsage = 1.f;
			m_rangeAggroMax = 100.f;
			m_typeAggroMax = 10.f;
			m_distanceAggroMax = 1.f;
			m_overWeightAggroMultiplier = 0.2f;
			m_maintainCurrentTargetMultiplier = 1.f;
			m_unreachableAggroMultiplier = 0.5f;
			m_attackingPlayerAggroMultiplier = 1.5f;
		};

		float m_defaultHumanTargetPreference; // 0x18 (24)
		float m_targetFlipFactorUsage; // 0x1C (28)
		Array<float> m_rangePriorities; // 0x20 (32)
		Array<PriorityTypeList> m_typePriorities; // 0x28 (40)
		float m_rangeAggroMax; // 0x30 (48)
		float m_typeAggroMax; // 0x34 (52)
		float m_distanceAggroMax; // 0x38 (56)
		float m_overWeightAggroMultiplier; // 0x3C (60)
		float m_maintainCurrentTargetMultiplier; // 0x40 (64)
		float m_unreachableAggroMultiplier; // 0x44 (68)
		float m_attackingPlayerAggroMultiplier; // 0x48 (72)
	}; // 0x50 (80)
}

