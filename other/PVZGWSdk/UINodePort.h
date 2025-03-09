///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/UIWidgetEventID.h>

namespace fb {
	class UINodePort : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINodePort"); }
		virtual ~UINodePort() override {}
		UINodePort() {
			m_query = UIWidgetEventID::UIWidgetEventID_None;
			m_allowManualRemove = false;
			m_isReferencePort = false;
		};

		String m_name; // 0x10 (16)
		String m_instanceName; // 0x18 (24)
		UIWidgetEventID m_query; // 0x20 (32)
		bool m_allowManualRemove; // 0x24 (36)
		bool m_isReferencePort; // 0x25 (37)
	}; // 0x28 (40)
}

