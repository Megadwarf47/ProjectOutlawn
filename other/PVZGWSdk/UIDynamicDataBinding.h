///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIDataBinding.h>
#include <fb/UIDataSourceInfo.h>

namespace fb {
	class UIDynamicDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDynamicDataBinding"); }
		virtual ~UIDynamicDataBinding() override {}
		UIDynamicDataBinding() {
			m_refresh = true;
		};

		Array<UIDataSourceInfo> m_bindings; // 0x10 (16)
		bool m_refresh; // 0x18 (24)
	}; // 0x20 (32)
}

