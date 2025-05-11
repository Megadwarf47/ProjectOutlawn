///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIBattledashHorisontalListData.h>
#include <fb/UIBattlelogDataSource.h>

namespace fb {
	class UIElementFillData;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattledashHListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashHListWidgetData"); }
		virtual ~UIBattledashHListWidgetData() override {}
		UIBattledashHListWidgetData() {
			m_padding = 1.f;
			m_listDataSource = UIBattlelogDataSource::BattlelogDataSource_ChallengeTypes;
			m_minAlpha = 0.3f;
			m_blinkFrequency = 5.f;
			m_flashTime = 0.5f;
		};

		CtrRef<UIElementFillData> m_stepperEmptyFill; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_elementWidget; // 0x70 (112)
		String m_widgetIdentifier; // 0x78 (120)
		float m_padding; // 0x80 (128)
		UIBattlelogDataSource m_listDataSource; // 0x84 (132)
		Array<UIBattledashHorisontalListData> m_listItems; // 0x88 (136)
		float m_minAlpha; // 0x90 (144)
		float m_blinkFrequency; // 0x94 (148)
		float m_flashTime; // 0x98 (152)
	}; // 0xA0 (160)
}

