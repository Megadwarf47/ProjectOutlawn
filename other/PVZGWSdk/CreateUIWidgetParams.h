///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class CreateUIWidgetParams : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CreateUIWidgetParams"); }
		virtual ~CreateUIWidgetParams() override {}
		CreateUIWidgetParams() {
		};

		String m_assetName; // 0x10 (16)
		String m_widgetTypeName; // 0x18 (24)
	}; // 0x20 (32)
}

