///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UIInputConceptFilterData.h>

namespace fb {
	struct UIOptionKeyBindingsType {
		UIOptionKeyBindingsType() {
		};

		String m_activatorEventName; // 0x0 (0)
		String m_id; // 0x8 (8)
		Array<UIInputConceptFilterData> m_filters; // 0x10 (16)
	}; // 0x18 (24)
}

