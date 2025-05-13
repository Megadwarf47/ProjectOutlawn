///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SpringData {
		SpringData() {
			m_length = 0.2f;
			m_stiffness = 0.5f;
			m_damping = 0.1f;
			m_progressiveStartRatio = 0.5f;
			m_progressiveExponent = 5.f;
			m_visualClipOffset = 0.f;
			m_attachOffsetY = 0.f;
			m_disabledStrenghModifier = 0.5f;
		};

		float m_length; // 0x0 (0)
		float m_stiffness; // 0x4 (4)
		float m_damping; // 0x8 (8)
		float m_progressiveStartRatio; // 0xC (12)
		float m_progressiveExponent; // 0x10 (16)
		float m_visualClipOffset; // 0x14 (20)
		float m_attachOffsetY; // 0x18 (24)
		float m_disabledStrenghModifier; // 0x1C (28)
	}; // 0x20 (32)
}

