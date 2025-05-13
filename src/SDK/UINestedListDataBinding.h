///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DefaultSelectionItem.h>
#include <fb/NestedList.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UIListEmptyRowType.h>
#include <fb/UIListNavigationType.h>
#include <fb/UIListRowType.h>

namespace fb {
	class UINestedListDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINestedListDataBinding"); }
		virtual ~UINestedListDataBinding() override {}
		UINestedListDataBinding() {
			m_listIndex = 0;
			m_navigationType = UIListNavigationType::loop;
			m_emptyRowType = UIListEmptyRowType::emptyRowNone;
			m_rowSpacing = 0;
			m_selectorWidth = 200;
			m_rowType = UIListRowType::MixedRows;
			m_sendIndexWithEvent = false;
			m_clearListAtNavigationEvent = false;
			m_useScrollBar = false;
			m_screenRotationEnabled = false;
			m_use3DSelection = false;
			m_dataIncludesButtonLayout = false;
			m_invertVisible = false;
			m_visible = true;
			m_highLightOnUpdate = true;
			m_sendLabelWithStaticItems = false;
			m_displayDisabledItems = false;
			m_allowDisabledItemSelection = false;
		};

		s32 m_listIndex; // 0x10 (16)
		Array<NestedList> m_nestedLists; // 0x18 (24)
		DefaultSelectionItem m_defaultHighlightedRow; // 0x20 (32)
		UIListNavigationType m_navigationType; // 0x40 (64)
		UIListEmptyRowType m_emptyRowType; // 0x44 (68)
		s32 m_rowSpacing; // 0x48 (72)
		s32 m_selectorWidth; // 0x4C (76)
		UIDataSourceInfo m_visibility; // 0x50 (80)
		UIListRowType m_rowType; // 0x68 (104)
		UIDataSourceInfo m_refreshKey; // 0x70 (112)
		bool m_sendIndexWithEvent; // 0x88 (136)
		bool m_clearListAtNavigationEvent; // 0x89 (137)
		bool m_useScrollBar; // 0x8A (138)
		bool m_screenRotationEnabled; // 0x8B (139)
		bool m_use3DSelection; // 0x8C (140)
		bool m_dataIncludesButtonLayout; // 0x8D (141)
		bool m_invertVisible; // 0x8E (142)
		bool m_visible; // 0x8F (143)
		bool m_highLightOnUpdate; // 0x90 (144)
		bool m_sendLabelWithStaticItems; // 0x91 (145)
		bool m_displayDisabledItems; // 0x92 (146)
		bool m_allowDisabledItemSelection; // 0x93 (147)
	}; // 0x98 (152)
}

