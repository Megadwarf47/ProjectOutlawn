///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DynamicGamePhysicsEntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
	class ExplosionEntityData;
	class MeshAsset;
}

namespace fb {
	class BangerEntityData : public DynamicGamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BangerEntityData"); }
		virtual ~BangerEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		virtual bool getIsEntityOwner() const override { return true; }
		BangerEntityData() {
			m_boneCount = 0;
			m_timeToLive = 0.f;
			m_initialSpeed = 0.f;
			m_destructiblePartCount = 0;
			m_useVariableNetworkFrequency = true;
		};

		Vec3 m_initialAngularVelocity; // 0x90 (144)
		CtrRef<MeshAsset> m_mesh; // 0xA0 (160)
		u32 m_boneCount; // 0xA8 (168)
		Array<LinearTransform> m_basePoseTransforms; // 0xB0 (176)
		CtrRef<ExplosionEntityData> m_explosion; // 0xB8 (184)
		float m_timeToLive; // 0xC0 (192)
		float m_initialSpeed; // 0xC4 (196)
		CtrRef<EffectBlueprint> m_trailEffect; // 0xC8 (200)
		u32 m_destructiblePartCount; // 0xD0 (208)
		bool m_useVariableNetworkFrequency; // 0xD4 (212)
	}; // 0xE0 (224)
}

