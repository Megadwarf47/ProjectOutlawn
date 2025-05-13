///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UILoadingProgressWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UILoadingProgressWidgetData"); }
		virtual ~UILoadingProgressWidgetData() override {}
		UILoadingProgressWidgetData() {
			m_blinkRate = 0.25f;
			m_blinkTime = 2.f;
			m_preBlinkTime = 1.f;
			m_typingTime = 0.5f;
			m_postBlinkTime = 1.f;
			m_deleteTextTime = 0.5f;
		};

		float m_blinkRate; // 0x68 (104)
		float m_blinkTime; // 0x6C (108)
		float m_preBlinkTime; // 0x70 (112)
		float m_typingTime; // 0x74 (116)
		float m_postBlinkTime; // 0x78 (120)
		float m_deleteTextTime; // 0x7C (124)
	}; // 0x80 (128)
}

