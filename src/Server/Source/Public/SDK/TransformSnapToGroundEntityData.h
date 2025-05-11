///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class TransformSnapToGroundEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformSnapToGroundEntityData"); }
		virtual ~TransformSnapToGroundEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformSnapToGroundEntityData() {
			m_realm = Realm::Realm_Server;
			m_distanceToGround = 0.f;
			m_rayCastLength = 3.f;
			m_rayCastUpOffset = 0.1f;
			m_alignWithGroundNormal = false;
			m_ignoreWater = true;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in; // 0x20 (32)
		float m_distanceToGround; // 0x60 (96)
		float m_rayCastLength; // 0x64 (100)
		float m_rayCastUpOffset; // 0x68 (104)
		bool m_alignWithGroundNormal; // 0x6C (108)
		bool m_ignoreWater; // 0x6D (109)
	}; // 0x70 (112)
}

