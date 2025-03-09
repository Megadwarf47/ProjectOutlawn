///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/UIPartIdentifier.h>

namespace fb {
	struct UIPartProperties {
		UIPartProperties() {
			m_identifier = UIPartIdentifier::HCI_None;
			m_range = 200.f;
			m_frequency = 6.f;
			m_compensateFreelook = false;
		};

		UIPartIdentifier m_identifier; // 0x0 (0)
		float m_range; // 0x4 (4)
		float m_frequency; // 0x8 (8)
		bool m_compensateFreelook; // 0xC (12)
	}; // 0x10 (16)
}

