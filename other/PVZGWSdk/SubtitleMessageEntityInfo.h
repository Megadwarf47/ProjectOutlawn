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
	class SubtitleMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubtitleMessageEntityInfo"); }
		virtual ~SubtitleMessageEntityInfo() override {}
		SubtitleMessageEntityInfo() {
			m_displayTime = 5.f;
		};

		String m_messageSid; // 0x10 (16)
		float m_displayTime; // 0x18 (24)
	}; // 0x20 (32)
}

