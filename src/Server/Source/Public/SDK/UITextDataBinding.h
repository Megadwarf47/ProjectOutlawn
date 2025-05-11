///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>

namespace fb {
	class UITextDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITextDataBinding"); }
		virtual ~UITextDataBinding() override {}
		UITextDataBinding() {
			m_refresh = true;
			m_overrideDirectAccess = true;
		};

		String m_staticText; // 0x10 (16)
		UIDataSourceInfo m_textData; // 0x18 (24)
		UIDataSourceInfo m_visibility; // 0x30 (48)
		bool m_refresh; // 0x48 (72)
		bool m_overrideDirectAccess; // 0x49 (73)
	}; // 0x50 (80)
}

