///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsPropertyRelationPropertyData.h>

namespace fb {
	class MaterialPropertyHealthData : public PhysicsPropertyRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyHealthData"); }
		virtual ~MaterialPropertyHealthData() override {}
		MaterialPropertyHealthData() {
			m_health = 100.f;
		};

		float m_health; // 0x10 (16)
	}; // 0x18 (24)
}

