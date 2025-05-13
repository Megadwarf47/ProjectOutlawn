///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class StartPointEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StartPointEntityData"); }
		virtual ~StartPointEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		StartPointEntityData() {
		};

		String m_startName; // 0x18 (24)
	}; // 0x20 (32)
}

