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
	class UICrosshairDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICrosshairDataBinding"); }
		virtual ~UICrosshairDataBinding() override {}
		UICrosshairDataBinding() {
			m_dispersionBaseOffset = 0.f;
		};

		UISimpleDataSource m_dispersion; // 0x10 (16)
		UISimpleDataSource m_zoomed; // 0x20 (32)
		UISimpleDataSource m_visibility; // 0x30 (48)
		float m_dispersionBaseOffset; // 0x40 (64)
	}; // 0x48 (72)
}

