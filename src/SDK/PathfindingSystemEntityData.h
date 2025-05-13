///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>

namespace fb {
	class PathfindingSystemEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathfindingSystemEntityData"); }
		virtual ~PathfindingSystemEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PathfindingSystemEntityData() {
		};

		Array<u32> m_pathfindingTypesOnLevel; // 0x18 (24)
	}; // 0x20 (32)
}

