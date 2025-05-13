///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalPlayerViewId.h>
#include <fb/Types.h>
#include <fb/ViewDefinitionType.h>

namespace fb {
	struct ViewDefinition {
		ViewDefinition() {
			m_viewId = LocalPlayerViewId::LocalPlayerViewId_RootView;
			m_viewType = ViewDefinitionType::ViewType_FullScreen;
			m_screenIndex = 0;
			m_offsetX = 0.f;
			m_offsetY = 0.f;
			m_width = 1.f;
			m_height = 1.f;
			m_fovScale = 1.f;
			m_normalizedSize = true;
		};

		LocalPlayerViewId m_viewId; // 0x0 (0)
		ViewDefinitionType m_viewType; // 0x4 (4)
		u32 m_screenIndex; // 0x8 (8)
		float m_offsetX; // 0xC (12)
		float m_offsetY; // 0x10 (16)
		float m_width; // 0x14 (20)
		float m_height; // 0x18 (24)
		float m_fovScale; // 0x1C (28)
		bool m_normalizedSize; // 0x20 (32)
	}; // 0x24 (36)
}

