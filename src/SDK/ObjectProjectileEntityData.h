///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GhostedProjectileEntityData.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class ObjectProjectileEntityData : public GhostedProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectProjectileEntityData"); }
		virtual ~ObjectProjectileEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		virtual bool getIsEntityOwner() const override { return false; }
		ObjectProjectileEntityData() {
			m_alignWithGroundRayLength = 5.f;
			m_noCharacterCollisionTime = 0.f;
			m_health = 1.f;
			m_alignWithGround = true;
			m_alignWithGroundOrientYUp = false;
			m_destroyOnPlayerRespawn = false;
			m_canPickUp = true;
		};

		CtrRef<ObjectBlueprint> m_projectileObject; // 0x130 (304)
		float m_alignWithGroundRayLength; // 0x138 (312)
		float m_noCharacterCollisionTime; // 0x13C (316)
		float m_health; // 0x140 (320)
		bool m_alignWithGround; // 0x144 (324)
		bool m_alignWithGroundOrientYUp; // 0x145 (325)
		bool m_destroyOnPlayerRespawn; // 0x146 (326)
		bool m_canPickUp; // 0x147 (327)
	}; // 0x150 (336)
}

