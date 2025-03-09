///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>

namespace fb {
	class PathFollowingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathFollowingComponentData"); }
		virtual ~PathFollowingComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PathFollowingComponentData() {
			m_updatePathAtDistancePercent = 25.f;
			m_preferredPathfindingIndex = 0;
			m_movementCorridorRadius = 0.f;
		};

		float m_updatePathAtDistancePercent; // 0x70 (112)
		u32 m_preferredPathfindingIndex; // 0x74 (116)
		Array<u32> m_alternatePathfindingIndices; // 0x78 (120)
		float m_movementCorridorRadius; // 0x80 (128)
	}; // 0x90 (144)
}

