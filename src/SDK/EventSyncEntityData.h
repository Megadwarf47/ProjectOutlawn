///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>

namespace fb {
	class EventSyncEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EventSyncEntityData"); }
		virtual ~EventSyncEntityData() override {}
		EventSyncEntityData() {
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_0;
		};

		LocalPlayerIndex m_localPlayerIndex; // 0x18 (24)
	}; // 0x20 (32)
}

