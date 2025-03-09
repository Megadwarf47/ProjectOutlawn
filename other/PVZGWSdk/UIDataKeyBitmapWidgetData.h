///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIDataKeyBitmapWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDataKeyBitmapWidgetData"); }
		virtual ~UIDataKeyBitmapWidgetData() override {}
		UIDataKeyBitmapWidgetData() {
			m_bitmapNameDataKey = 0;
		};

		String m_namePrefix; // 0x68 (104)
		String m_namePostfix; // 0x70 (112)
		s32 m_bitmapNameDataKey; // 0x78 (120)
	}; // 0x80 (128)
}

