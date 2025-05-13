///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/UIColorType.h>
#include <fb/Vec4.h>

namespace fb {
	class UIColor : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIColor"); }
		virtual ~UIColor() override {}
		UIColor() {
			m_colorType = UIColorType::UIColorType_Unselected;
			m_color = Vec4(1.f, 1.f, 1.f, 1.f);
		};

		UIColorType m_colorType; // 0x10 (16)
		Vec4 m_color; // 0x20 (32)
	}; // 0x30 (48)
}

