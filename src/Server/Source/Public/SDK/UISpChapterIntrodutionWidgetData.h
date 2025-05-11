///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/Vec2.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UISpChapterIntrodutionWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpChapterIntrodutionWidgetData"); }
		virtual ~UISpChapterIntrodutionWidgetData() override {}
		UISpChapterIntrodutionWidgetData() {
			m_backgroundMargin = Vec2(4.f, 4.f);
		};

		Vec2 m_backgroundMargin; // 0x68 (104)
		CtrRef<UIElementFillData> m_backgroundFill; // 0x70 (112)
	}; // 0x78 (120)
}

