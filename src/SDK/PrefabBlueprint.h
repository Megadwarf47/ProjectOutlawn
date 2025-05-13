///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Blueprint.h>
#include <fb/RefArray.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class PrefabBlueprint : public Blueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PrefabBlueprint"); }
		virtual ~PrefabBlueprint() override {}
		PrefabBlueprint() {
		};

		RefArray<GameObjectData> m_objects; // 0x40 (64)
	}; // 0x48 (72)
}

