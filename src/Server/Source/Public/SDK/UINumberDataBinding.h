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
	class UINumberDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINumberDataBinding"); }
		virtual ~UINumberDataBinding() override {}
		UINumberDataBinding() {
			m_numValue = 0;
			m_refresh = true;
		};

		UIDataSourceInfo m_value; // 0x10 (16)
		s32 m_numValue; // 0x28 (40)
		bool m_refresh; // 0x2C (44)
	}; // 0x30 (48)
}

