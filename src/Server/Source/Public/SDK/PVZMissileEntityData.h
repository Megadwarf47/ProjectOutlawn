///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MissileEntityData.h>

namespace fb {
	class DamageFalloffData;
	class PropulsionData;
}

namespace fb {
	class PVZMissileEntityData : public MissileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZMissileEntityData"); }
		virtual ~PVZMissileEntityData() override {}
		PVZMissileEntityData() {
			m_proximityRadius = 0.f;
			m_armingTime = 0.f;
			m_triggeringTime = 0.f;
			m_destroyOnPlayerRespawn = false;
		};

		CtrRef<PropulsionData> m_propulsion; // 0x1F0 (496)
		CtrRef<DamageFalloffData> m_impactDamageFalloff; // 0x1F8 (504)
		CtrRef<DamageFalloffData> m_explosionDamageFalloff; // 0x200 (512)
		float m_proximityRadius; // 0x208 (520)
		float m_armingTime; // 0x20C (524)
		float m_triggeringTime; // 0x210 (528)
		bool m_destroyOnPlayerRespawn; // 0x214 (532)
	}; // 0x220 (544)
}

