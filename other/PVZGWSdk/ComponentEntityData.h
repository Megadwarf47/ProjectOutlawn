///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class ComponentEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ComponentEntityData"); }
		virtual ~ComponentEntityData() override {}
		ComponentEntityData() {
			m_clientRuntimeComponentCount = 0;
			m_serverRuntimeComponentCount = 0;
			m_clientRuntimeTransformationCount = 0;
			m_serverRuntimeTransformationCount = 0;
		};

		RefArray<GameObjectData> m_components; // 0x60 (96)
		u8 m_clientRuntimeComponentCount; // 0x68 (104)
		u8 m_serverRuntimeComponentCount; // 0x69 (105)
		u8 m_clientRuntimeTransformationCount; // 0x6A (106)
		u8 m_serverRuntimeTransformationCount; // 0x6B (107)
	}; // 0x70 (112)
}

