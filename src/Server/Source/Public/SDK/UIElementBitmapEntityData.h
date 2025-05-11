///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementBitmapDistanceFieldParams.h>
#include <fb/UIElementEntityData.h>
#include <fb/Vec4.h>

namespace fb {
	class UIElementGenericStyle;
}

namespace fb {
	class UIElementBitmapEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementBitmapEntityData"); }
		virtual ~UIElementBitmapEntityData() override {}
		UIElementBitmapEntityData() {
			m_uvRect = Vec4(0.f, 0.f, 1.f, 1.f);
			m_distanceField = false;
		};

		Vec4 m_uvRect; // 0xD0 (208)
		UIElementBitmapDistanceFieldParams m_distanceFieldParams; // 0xE0 (224)
		CtrRef<UIElementGenericStyle> m_style; // 0x110 (272)
		String m_textureId; // 0x118 (280)
		String m_textureIdPropertyName; // 0x120 (288)
		bool m_distanceField; // 0x128 (296)
	}; // 0x130 (304)
}

