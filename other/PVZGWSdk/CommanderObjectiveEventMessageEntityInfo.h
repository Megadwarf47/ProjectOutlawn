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
	class CommanderObjectiveEventMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CommanderObjectiveEventMessageEntityInfo"); }
		virtual ~CommanderObjectiveEventMessageEntityInfo() override {}
		CommanderObjectiveEventMessageEntityInfo() {
		};

		String m_objectiveSid; // 0x10 (16)
		String m_descriptionSid; // 0x18 (24)
	}; // 0x20 (32)
}

