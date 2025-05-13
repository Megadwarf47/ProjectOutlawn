///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIOptionsOption.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	class UIOptionsListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsListWidgetData"); }
		virtual ~UIOptionsListWidgetData() override {}
		UIOptionsListWidgetData() {
		};

		String m_activationString; // 0x68 (104)
		String m_tabName; // 0x70 (112)
		Array<UIOptionsOption> m_options; // 0x78 (120)
		CtrRef<UIWidgetBlueprint> m_selectorTemplate; // 0x80 (128)
		CtrRef<UIWidgetBlueprint> m_sliderTemplate; // 0x88 (136)
	}; // 0x90 (144)
}

