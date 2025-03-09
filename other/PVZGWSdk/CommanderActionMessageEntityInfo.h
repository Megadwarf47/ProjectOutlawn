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
	class CommanderActionMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CommanderActionMessageEntityInfo"); }
		virtual ~CommanderActionMessageEntityInfo() override {}
		CommanderActionMessageEntityInfo() {
		};

		String m_messageSid; // 0x10 (16)
	}; // 0x18 (24)
}

