///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>

namespace fb {
	class UIBarDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBarDataBinding"); }
		virtual ~UIBarDataBinding() override {}
		UIBarDataBinding() {
			m_refresh = true;
		};

		UIDataSourceInfo m_visibility; // 0x10 (16)
		UIDataSourceInfo m_value; // 0x28 (40)
		UIDataSourceInfo m_color; // 0x40 (64)
		bool m_refresh; // 0x58 (88)
	}; // 0x60 (96)
}

