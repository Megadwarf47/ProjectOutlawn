///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIServerFilterType.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	struct CellTemplateData {
		CellTemplateData() {
			m_filterMapping = UIServerFilterType::UIServerFilterType_Slots;
		};

		String m_mappingID; // 0x0 (0)
		CtrRef<UIWidgetBlueprint> m_widgetTemplate; // 0x8 (8)
		UIServerFilterType m_filterMapping; // 0x10 (16)
	}; // 0x18 (24)
}

