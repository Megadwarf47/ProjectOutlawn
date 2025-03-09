///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIVisualWidgetType.h>
#include <fb/Vec2.h>

namespace fb {
	class UIMinimapLineStyle;
}

namespace fb {
	class UIMinimapOrdersWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapOrdersWidgetData"); }
		virtual ~UIMinimapOrdersWidgetData() override {}
		UIMinimapOrdersWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
			m_startpointBuffer = 0.f;
			m_endpointBuffer = 0.f;
			m_fullscreenMapMode = false;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
		CtrRef<UIMinimapLineStyle> m_pendingOrderStyle; // 0x70 (112)
		CtrRef<UIMinimapLineStyle> m_unselectedPendingOrderStyle; // 0x78 (120)
		CtrRef<UIMinimapLineStyle> m_attackOrderStyle; // 0x80 (128)
		CtrRef<UIMinimapLineStyle> m_attackOrderSquadStyle; // 0x88 (136)
		CtrRef<UIMinimapLineStyle> m_unselectedAttackOrderStyle; // 0x90 (144)
		CtrRef<UIMinimapLineStyle> m_defendOrderStyle; // 0x98 (152)
		CtrRef<UIMinimapLineStyle> m_defendOrderSquadStyle; // 0xA0 (160)
		CtrRef<UIMinimapLineStyle> m_unselectedDefendOrderStyle; // 0xA8 (168)
		float m_startpointBuffer; // 0xB0 (176)
		float m_endpointBuffer; // 0xB4 (180)
		Vec2 m_endpointStickBorderBuffer; // 0xB8 (184)
		Vec2 m_startpointStickBorderBuffer; // 0xC0 (192)
		bool m_fullscreenMapMode; // 0xC8 (200)
	}; // 0xD0 (208)
}

