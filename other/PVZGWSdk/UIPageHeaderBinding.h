///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UILevelSpecificPageHeader.h>

namespace fb {
	class UIPageHeaderBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPageHeaderBinding"); }
		virtual ~UIPageHeaderBinding() override {}
		UIPageHeaderBinding() {
		};

		UIDataSourceInfo m_header; // 0x10 (16)
		UIDataSourceInfo m_subHeader; // 0x28 (40)
		UIDataSourceInfo m_icon; // 0x40 (64)
		String m_staticHeader; // 0x58 (88)
		String m_staticSubHeader; // 0x60 (96)
		String m_staticIcon; // 0x68 (104)
		Array<UILevelSpecificPageHeader> m_levelSpecificHeaders; // 0x70 (112)
	}; // 0x78 (120)
}

