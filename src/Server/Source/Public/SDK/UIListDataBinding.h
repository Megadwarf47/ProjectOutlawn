///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DefaultSelectionItem.h>
#include <fb/StaticListItem.h>
#include <fb/String.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UIListEmptyRowType.h>
#include <fb/UIListNavigationType.h>
#include <fb/UIListRowType.h>
#include <fb/UIListUnFocusMode.h>

namespace fb {
	class UIListDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIListDataBinding"); }
		virtual ~UIListDataBinding() override {}
		UIListDataBinding() {
			m_listIndex = 0;
			m_rowType = UIListRowType::MixedRows;
			m_navigationType = UIListNavigationType::loop;
			m_unFocusMode = UIListUnFocusMode::DeSelect;
			m_emptyRowType = UIListEmptyRowType::emptyRowNone;
			m_rowSpacing = 0;
			m_sendIndexWithEvent = false;
			m_clearListAtNavigationEvent = false;
			m_useScrollBar = false;
			m_screenRotationEnabled = false;
			m_use3DSelection = false;
			m_mouseClickHighlight = false;
			m_fireHighlightOnMouseOut = false;
			m_dataIncludesButtonLayout = false;
			m_visible = true;
			m_spinnerEnabled = false;
			m_highLightOnUpdate = true;
			m_enableScaleToText = true;
			m_disableItemCaching = false;
			m_displayDisabledItems = false;
			m_allowDisabledItemSelection = false;
			m_isPurchaseList = false;
		};

		s32 m_listIndex; // 0x10 (16)
		UIDataSourceInfo m_listQuery; // 0x18 (24)
		Array<StaticListItem> m_staticItems; // 0x30 (48)
		DefaultSelectionItem m_defaultHighlightedRow; // 0x38 (56)
		UIListRowType m_rowType; // 0x58 (88)
		UIListNavigationType m_navigationType; // 0x5C (92)
		UIDataSourceInfo m_navigationTypeSource; // 0x60 (96)
		UIListUnFocusMode m_unFocusMode; // 0x78 (120)
		UIListEmptyRowType m_emptyRowType; // 0x7C (124)
		s32 m_rowSpacing; // 0x80 (128)
		String m_disabledRows; // 0x88 (136)
		UIDataSourceInfo m_refreshKey; // 0x90 (144)
		bool m_sendIndexWithEvent; // 0xA8 (168)
		bool m_clearListAtNavigationEvent; // 0xA9 (169)
		bool m_useScrollBar; // 0xAA (170)
		bool m_screenRotationEnabled; // 0xAB (171)
		bool m_use3DSelection; // 0xAC (172)
		bool m_mouseClickHighlight; // 0xAD (173)
		bool m_fireHighlightOnMouseOut; // 0xAE (174)
		bool m_dataIncludesButtonLayout; // 0xAF (175)
		bool m_visible; // 0xB0 (176)
		bool m_spinnerEnabled; // 0xB1 (177)
		bool m_highLightOnUpdate; // 0xB2 (178)
		bool m_enableScaleToText; // 0xB3 (179)
		bool m_disableItemCaching; // 0xB4 (180)
		bool m_displayDisabledItems; // 0xB5 (181)
		bool m_allowDisabledItemSelection; // 0xB6 (182)
		bool m_isPurchaseList; // 0xB7 (183)
	}; // 0xB8 (184)
}

