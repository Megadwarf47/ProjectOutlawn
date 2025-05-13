///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIDeployZoomWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDeployZoomWidgetData"); }
		virtual ~UIDeployZoomWidgetData() override {}
		UIDeployZoomWidgetData() {
			m_maxElevation = 100.f;
			m_minElevation = 0.f;
			m_elevationDecimals = 2;
		};

		float m_maxElevation; // 0x68 (104)
		float m_minElevation; // 0x6C (108)
		u32 m_elevationDecimals; // 0x70 (112)
		String m_suffix; // 0x78 (120)
	}; // 0x80 (128)
}

