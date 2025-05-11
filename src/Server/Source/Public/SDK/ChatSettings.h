///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntiSpamConfig.h>
#include <fb/Array.h>
#include <fb/ChatChannelType.h>
#include <fb/SystemSettings.h>

namespace fb {
	class ChatSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChatSettings"); }
		virtual ~ChatSettings() override {}
		ChatSettings() {
		};

		Array<ChatChannelType> m_channels; // 0x20 (32)
		AntiSpamConfig m_antiSpam; // 0x28 (40)
	}; // 0x58 (88)
}

