///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/VoiceOverConversationQueueGroupPolyphony.h>

namespace fb {
	class VoiceOverConversationQueueGroup : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConversationQueueGroup"); }
		virtual ~VoiceOverConversationQueueGroup() override {}
		VoiceOverConversationQueueGroup() {
			m_polyphonyMode = VoiceOverConversationQueueGroupPolyphony::VoiceOverConversationQueueGroupPolyphony_Sources;
			m_polyphony = 0;
		};

		String m_name; // 0x10 (16)
		VoiceOverConversationQueueGroupPolyphony m_polyphonyMode; // 0x18 (24)
		u32 m_polyphony; // 0x1C (28)
	}; // 0x20 (32)
}

