///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class MessageEntityInfo;
}

namespace fb {
	class MessageEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MessageEntityData"); }
		virtual ~MessageEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		MessageEntityData() {
			m_enabled = true;
		};

		CtrRef<MessageEntityInfo> m_messageInfo; // 0x18 (24)
		String m_overrideMessageSid; // 0x20 (32)
		bool m_enabled; // 0x28 (40)
	}; // 0x30 (48)
}

