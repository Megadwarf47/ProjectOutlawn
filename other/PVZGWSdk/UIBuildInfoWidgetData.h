///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIBuildInfoWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBuildInfoWidgetData"); }
		virtual ~UIBuildInfoWidgetData() override {}
		UIBuildInfoWidgetData() {
			m_randomizeLocationInterval = 0.f;
		};

		float m_randomizeLocationInterval; // 0x68 (104)
	}; // 0x70 (112)
}

