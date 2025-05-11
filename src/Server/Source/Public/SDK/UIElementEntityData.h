///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>
#include <fb/UIElementAnchor.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementOffset.h>
#include <fb/UIElementRectExpansion.h>
#include <fb/UIElementSize.h>
#include <fb/UIElementTransform.h>
#include <fb/UILayoutMode.h>
#include <fb/Vec3.h>

namespace fb {
	class UIElementEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementEntityData"); }
		virtual ~UIElementEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIElementEntityData() {
			m_instanceNameHash = 0;
			m_layoutMode = UILayoutMode::UILayoutMode_AnchorOffset;
			m_visible = true;
		};

		String m_instanceName; // 0x18 (24)
		UIElementTransform m_uiElementTransform; // 0x20 (32)
		UIElementColor m_color; // 0x50 (80)
		Vec3 m_positionOffset; // 0x70 (112)
		Vec3 m_rotationOffset; // 0x80 (128)
		u32 m_instanceNameHash; // 0x90 (144)
		UIElementSize m_size; // 0x94 (148)
		UILayoutMode m_layoutMode; // 0x9C (156)
		UIElementOffset m_offset; // 0xA0 (160)
		UIElementAnchor m_anchor; // 0xA8 (168)
		UIElementOffset m_position; // 0xB0 (176)
		UIElementRectExpansion m_expansion; // 0xB8 (184)
		bool m_visible; // 0xC8 (200)
	}; // 0xD0 (208)
}

