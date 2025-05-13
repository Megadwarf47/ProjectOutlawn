///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/ReceiveGlobalEventData.h>
#include <fb/SendGlobalEventData.h>

namespace fb {
	class GlobalEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GlobalEventEntityData"); }
		virtual ~GlobalEventEntityData() override {}
		GlobalEventEntityData() {
		};

		Array<SendGlobalEventData> m_sendableEvents; // 0x18 (24)
		Array<ReceiveGlobalEventData> m_receivableEvents; // 0x20 (32)
	}; // 0x28 (40)
}

