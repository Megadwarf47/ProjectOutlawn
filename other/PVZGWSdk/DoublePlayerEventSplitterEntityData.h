///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class DoublePlayerEventSplitterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DoublePlayerEventSplitterEntityData"); }
		virtual ~DoublePlayerEventSplitterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		DoublePlayerEventSplitterEntityData() {
		};

	}; // 0x18 (24)
}

