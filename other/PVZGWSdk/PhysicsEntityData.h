///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/RefArray.h>
#include <fb/Vec3.h>

namespace fb {
	class FloatPhysicsData;
	class HavokAsset;
	class PhysicsConstraintData;
	class ProximityData;
	class RigidBodyData;
}

namespace fb {
	class PhysicsEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsEntityData"); }
		virtual ~PhysicsEntityData() override {}
		PhysicsEntityData() {
			m_inertiaModifier = Vec3(1.f, 1.f, 1.f);
			m_mass = -1.f;
			m_friction = -1.f;
			m_restitution = -1.f;
			m_angularVelocityDamping = -1.f;
			m_linearVelocityDamping = -1.f;
			m_movableParts = false;
			m_isComposite = false;
		};

		CtrRef<HavokAsset> m_asset; // 0x18 (24)
		Vec3 m_inertiaModifier; // 0x20 (32)
		RefArray<RigidBodyData> m_rigidBodies; // 0x30 (48)
		CtrRef<FloatPhysicsData> m_floatPhysics; // 0x38 (56)
		float m_mass; // 0x40 (64)
		float m_friction; // 0x44 (68)
		float m_restitution; // 0x48 (72)
		float m_angularVelocityDamping; // 0x4C (76)
		float m_linearVelocityDamping; // 0x50 (80)
		CtrRef<ProximityData> m_proximity; // 0x58 (88)
		RefArray<PhysicsConstraintData> m_constraints; // 0x60 (96)
		bool m_movableParts; // 0x68 (104)
		bool m_isComposite; // 0x69 (105)
	}; // 0x70 (112)
}

