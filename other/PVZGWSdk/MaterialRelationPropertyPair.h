///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>

namespace fb {
	class PhysicsMaterialRelationPropertyData;
	class PhysicsPropertyRelationPropertyData;
}

namespace fb {
	struct MaterialRelationPropertyPair {
		MaterialRelationPropertyPair() {
		};

		RefArray<PhysicsMaterialRelationPropertyData> m_physicsMaterialProperties; // 0x0 (0)
		RefArray<PhysicsPropertyRelationPropertyData> m_physicsPropertyProperties; // 0x8 (8)
	}; // 0x10 (16)
}

