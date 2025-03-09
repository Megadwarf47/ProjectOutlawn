///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MessageEntityInfo.h>
#include <fb/String.h>

namespace fb {
	class EventLogMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventLogMessageEntityInfo"); }
		virtual ~EventLogMessageEntityInfo() override {}
		EventLogMessageEntityInfo() {
			m_includePlayerName = true;
		};

		String m_messageSid; // 0x10 (16)
		bool m_includePlayerName; // 0x18 (24)
	}; // 0x20 (32)
}

