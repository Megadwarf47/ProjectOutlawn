///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsPropertyRelationPropertyData.h>

namespace fb {
	class MaterialRelationPenetrationData : public PhysicsPropertyRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationPenetrationData"); }
		virtual ~MaterialRelationPenetrationData() override {}
		MaterialRelationPenetrationData() {
			m_neverPenetrate = false;
		};

		bool m_neverPenetrate; // 0x10 (16)
	}; // 0x18 (24)
}

