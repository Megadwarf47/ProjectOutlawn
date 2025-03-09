///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RichPresencePropertyType.h>
#include <fb/String.h>

namespace fb {
	struct RichPresenceProperty {
		RichPresenceProperty() {
			m_propertyType = RichPresencePropertyType::RichPresencePropertyType_Float;
		};

		String m_name; // 0x0 (0)
		RichPresencePropertyType m_propertyType; // 0x8 (8)
	}; // 0x10 (16)
}

