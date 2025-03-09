///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LogicReferenceObjectData.h>
#include <fb/String.h>
#include <fb/UIElementAnchor.h>
#include <fb/UIElementColor.h>
#include <fb/UIElementInclusionSettings.h>
#include <fb/UIElementOffset.h>
#include <fb/UIElementRectExpansion.h>
#include <fb/UIElementSize.h>
#include <fb/UIElementTransform.h>
#include <fb/UILayoutMode.h>
#include <fb/Vec3.h>

namespace fb {
	class UIElementWidgetReferenceEntityData : public LogicReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementWidgetReferenceEntityData"); }
		virtual ~UIElementWidgetReferenceEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIElementWidgetReferenceEntityData() {
			m_instanceNameHash = 0;
			m_layoutMode = UILayoutMode::UILayoutMode_AnchorOffset;
			m_useElementSize = false;
		};

		UIElementTransform m_uiElementTransform; // 0x90 (144)
		UIElementColor m_color; // 0xC0 (192)
		Vec3 m_positionOffset; // 0xE0 (224)
		Vec3 m_rotationOffset; // 0xF0 (240)
		String m_instanceName; // 0x100 (256)
		u32 m_instanceNameHash; // 0x108 (264)
		UIElementInclusionSettings m_inclusionSettings; // 0x110 (272)
		UIElementSize m_size; // 0x128 (296)
		UILayoutMode m_layoutMode; // 0x130 (304)
		UIElementOffset m_offset; // 0x134 (308)
		UIElementAnchor m_anchor; // 0x13C (316)
		UIElementOffset m_position; // 0x144 (324)
		UIElementRectExpansion m_expansion; // 0x14C (332)
		String m_codeAccessIdentifier; // 0x160 (352)
		bool m_useElementSize; // 0x168 (360)
	}; // 0x170 (368)
}

