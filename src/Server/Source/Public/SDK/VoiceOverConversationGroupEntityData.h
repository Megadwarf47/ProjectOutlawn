///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class VoiceOverConversationQueueGroup;
}

namespace fb {
	class VoiceOverConversationGroupEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConversationGroupEntityData"); }
		virtual ~VoiceOverConversationGroupEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VoiceOverConversationGroupEntityData() {
		};

		CtrRef<VoiceOverConversationQueueGroup> m_queueGroup; // 0x18 (24)
	}; // 0x20 (32)
}

