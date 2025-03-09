///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIAlignMode.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UIScaleMode.h>

namespace fb {
	class UIImageDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIImageDataBinding"); }
		virtual ~UIImageDataBinding() override {}
		UIImageDataBinding() {
			m_alignMode = UIAlignMode::topLeft;
			m_scaleMode = UIScaleMode::noScaling;
			m_visible = true;
		};

		UIAlignMode m_alignMode; // 0x10 (16)
		UIScaleMode m_scaleMode; // 0x14 (20)
		String m_staticImageUrl; // 0x18 (24)
		UIDataSourceInfo m_imageData; // 0x20 (32)
		UIDataSourceInfo m_visibility; // 0x38 (56)
		bool m_visible; // 0x50 (80)
	}; // 0x58 (88)
}

