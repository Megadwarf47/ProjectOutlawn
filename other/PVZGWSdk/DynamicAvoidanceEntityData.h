///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntDynamicAvoidanceBinding.h>
#include <fb/DynamicAvoidanceMode.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class DynamicAvoidanceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicAvoidanceEntityData"); }
		virtual ~DynamicAvoidanceEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DynamicAvoidanceEntityData() {
			m_repelOthers = DynamicAvoidanceMode::DynamicAvoidanceMode_Always;
			m_reportPredictedCollision = DynamicAvoidanceMode::DynamicAvoidanceMode_Always;
			m_collisionRadius = 0.25f;
			m_realm = Realm::Realm_ClientAndServer;
			m_affectedByRepellingForce = false;
			m_predictedByOthers = false;
		};

		DynamicAvoidanceMode m_repelOthers; // 0x18 (24)
		DynamicAvoidanceMode m_reportPredictedCollision; // 0x1C (28)
		float m_collisionRadius; // 0x20 (32)
		AntDynamicAvoidanceBinding m_antBinding; // 0x24 (36)
		Realm m_realm; // 0x74 (116)
		bool m_affectedByRepellingForce; // 0x78 (120)
		bool m_predictedByOthers; // 0x79 (121)
	}; // 0x80 (128)
}

