///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIDataBinding.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UIHUDMessageBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHUDMessageBinding"); }
		virtual ~UIHUDMessageBinding() override {}
		UIHUDMessageBinding() {
			m_numberOfRows = 1;
		};

		UISimpleDataSource m_messageQuery; // 0x10 (16)
		UISimpleDataSource m_visibilityQuery; // 0x20 (32)
		s32 m_numberOfRows; // 0x30 (48)
	}; // 0x38 (56)
}

