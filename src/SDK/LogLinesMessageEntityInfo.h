///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MessageEntityInfo.h>
#include <fb/MessageLineData.h>
#include <fb/String.h>

namespace fb {
	class LogLinesMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LogLinesMessageEntityInfo"); }
		virtual ~LogLinesMessageEntityInfo() override {}
		LogLinesMessageEntityInfo() {
			m_displayTime = 5.f;
		};

		String m_messageSid; // 0x10 (16)
		float m_displayTime; // 0x18 (24)
		Array<MessageLineData> m_additionalMessages; // 0x20 (32)
	}; // 0x28 (40)
}

