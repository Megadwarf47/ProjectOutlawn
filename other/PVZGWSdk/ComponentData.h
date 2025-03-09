///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameObjectData.h>
#include <fb/LinearTransform.h>
#include <fb/RefArray.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class ComponentData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ComponentData"); }
		virtual ~ComponentData() override {}
		ComponentData() {
			m_excluded = false;
		};

		RefArray<GameObjectData> m_components; // 0x18 (24)
		LinearTransform m_transform; // 0x20 (32)
		bool m_excluded; // 0x60 (96)
	}; // 0x70 (112)
}

