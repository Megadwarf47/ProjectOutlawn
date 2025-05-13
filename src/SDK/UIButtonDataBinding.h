///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIButtonSet.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>

namespace fb {
	class UIButtonDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIButtonDataBinding"); }
		virtual ~UIButtonDataBinding() override {}
		UIButtonDataBinding() {
			m_invertVisible = false;
			m_visible = true;
			m_inputOnRelease = false;
			m_hiddenOnPC = false;
		};

		UIDataSourceInfo m_buttonsDatasource; // 0x10 (16)
		UIButtonSet m_defaultButtonSet; // 0x28 (40)
		UIDataSourceInfo m_visibility; // 0x30 (48)
		bool m_invertVisible; // 0x48 (72)
		bool m_visible; // 0x49 (73)
		bool m_inputOnRelease; // 0x4A (74)
		bool m_hiddenOnPC; // 0x4B (75)
	}; // 0x50 (80)
}

