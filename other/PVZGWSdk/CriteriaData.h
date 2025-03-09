///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CriteriaType.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/StatEvent.h>
#include <fb/String.h>

namespace fb {
	class CriteriaGateList;
	class StatsCategoryBaseData;
}

namespace fb {
	class CriteriaData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CriteriaData"); }
		virtual ~CriteriaData() override {}
		CriteriaData() {
			m_completionValue = 1.f;
			m_measuring = StatEvent::StatEvent_Invalid;
			m_criteriaType = CriteriaType::CriteriaType_IAR_InARound;
			m_scaleFactor = 1.f;
			m_scale = 1.f;
			m_shouldSummarize = false;
			m_shouldHide = false;
			m_countEvents = false;
		};

		float m_completionValue; // 0x10 (16)
		CtrRef<CriteriaGateList> m_gateList; // 0x18 (24)
		StatEvent m_measuring; // 0x20 (32)
		CtrRef<StatsCategoryBaseData> m_paramX; // 0x28 (40)
		CtrRef<StatsCategoryBaseData> m_paramY; // 0x30 (48)
		RefArray<StatsCategoryBaseData> m_orParamsX; // 0x38 (56)
		CriteriaType m_criteriaType; // 0x40 (64)
		String m_descriptionSid; // 0x48 (72)
		float m_scaleFactor; // 0x50 (80)
		float m_scale; // 0x54 (84)
		bool m_shouldSummarize; // 0x58 (88)
		bool m_shouldHide; // 0x59 (89)
		bool m_countEvents; // 0x5A (90)
	}; // 0x60 (96)
}

