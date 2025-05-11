///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UIWidgetPathBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWidgetPathBinding"); }
		virtual ~UIWidgetPathBinding() override {}
		UIWidgetPathBinding() {
		};

		UISimpleDataSource m_widgetPathQuery; // 0x10 (16)
		UIDataSourceInfo m_visibility; // 0x20 (32)
	}; // 0x38 (56)
}

