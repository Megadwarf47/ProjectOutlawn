///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DebugMenuItemType.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class DebugMenuItemEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugMenuItemEntityData"); }
		virtual ~DebugMenuItemEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		DebugMenuItemEntityData() {
			m_itemType = DebugMenuItemType::DmitItem;
		};

		DebugMenuItemType m_itemType; // 0x18 (24)
		String m_text; // 0x20 (32)
	}; // 0x28 (40)
}

