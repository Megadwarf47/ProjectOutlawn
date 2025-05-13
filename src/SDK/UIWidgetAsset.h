///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIAsset.h>
#include <fb/WidgetEventQueryPair.h>

namespace fb {
	class UIWidgetAsset : public UIAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWidgetAsset"); }
		virtual ~UIWidgetAsset() override {}
		UIWidgetAsset() {
		};

		Array<WidgetEventQueryPair> m_widgetEvents; // 0x28 (40)
	}; // 0x30 (48)
}

