///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class PlayAnimationData;
}

namespace fb {
	class PlayAnimationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayAnimationEntityData"); }
		virtual ~PlayAnimationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlayAnimationEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_externalTime = -1.f;
			m_lifeTime = -1.f;
			m_alignValue = 0.f;
			m_replicated = false;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_entitySpace0; // 0x20 (32)
		LinearTransform m_entitySpace1; // 0x60 (96)
		LinearTransform m_entitySpace2; // 0xA0 (160)
		LinearTransform m_entitySpace3; // 0xE0 (224)
		LinearTransform m_entitySpace4; // 0x120 (288)
		CtrRef<PlayAnimationData> m_animation; // 0x160 (352)
		float m_externalTime; // 0x168 (360)
		float m_lifeTime; // 0x16C (364)
		float m_alignValue; // 0x170 (368)
		bool m_replicated; // 0x174 (372)
	}; // 0x180 (384)
}

