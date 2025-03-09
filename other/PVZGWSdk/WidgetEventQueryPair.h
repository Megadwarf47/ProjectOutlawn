///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIWidgetEventID.h>

namespace fb {
	struct WidgetEventQueryPair {
		WidgetEventQueryPair() {
			m_query = UIWidgetEventID::UIWidgetEventID_None;
			m_isOutput = true;
		};

		String m_name; // 0x0 (0)
		UIWidgetEventID m_query; // 0x8 (8)
		String m_instanceName; // 0x10 (16)
		bool m_isOutput; // 0x18 (24)
	}; // 0x20 (32)
}

