///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct SoundGraphLinkedPluginAttribute {
		SoundGraphLinkedPluginAttribute() {
			m_unconnectedValue = 0.f;
			m_valueIndex = 0;
			m_nodeIndexAndFlags = 0;
			m_voiceIndex = 0;
			m_pluginIndex = 0;
			m_attributeIndex = 0;
		};

		float m_unconnectedValue; // 0x0 (0)
		u16 m_valueIndex; // 0x4 (4)
		u16 m_nodeIndexAndFlags; // 0x6 (6)
		u8 m_voiceIndex; // 0x8 (8)
		u8 m_pluginIndex; // 0x9 (9)
		u8 m_attributeIndex; // 0xA (10)
	}; // 0xC (12)
}

