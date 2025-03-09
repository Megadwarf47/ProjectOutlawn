///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsPropertyRelationPropertyData.h>

namespace fb {
	class MaterialPropertyImpulseData : public PhysicsPropertyRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyImpulseData"); }
		virtual ~MaterialPropertyImpulseData() override {}
		MaterialPropertyImpulseData() {
			m_impulseAbsorptionMultiplier = 1.f;
		};

		float m_impulseAbsorptionMultiplier; // 0x10 (16)
	}; // 0x18 (24)
}

