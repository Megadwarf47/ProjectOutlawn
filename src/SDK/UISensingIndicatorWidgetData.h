///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UISensingIndicatorWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISensingIndicatorWidgetData"); }
		virtual ~UISensingIndicatorWidgetData() override {}
		UISensingIndicatorWidgetData() {
			m_bumpDuration = 0.25f;
			m_bumpMaxScale = 0.4f;
			m_bumpExponent = 3.f;
		};

		float m_bumpDuration; // 0x68 (104)
		float m_bumpMaxScale; // 0x6C (108)
		float m_bumpExponent; // 0x70 (112)
	}; // 0x78 (120)
}

