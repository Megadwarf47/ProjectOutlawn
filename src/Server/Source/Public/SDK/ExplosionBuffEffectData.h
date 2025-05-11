///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/CtrRef.h>

namespace fb {
	class ExplosionEntityData;
	class WeaponUnlockAsset;
}

namespace fb {
	class ExplosionBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionBuffEffectData"); }
		virtual ~ExplosionBuffEffectData() override {}
		ExplosionBuffEffectData() {
		};

		CtrRef<WeaponUnlockAsset> m_weaponUnlock; // 0x10 (16)
		CtrRef<ExplosionEntityData> m_applicationExplosion; // 0x18 (24)
		CtrRef<ExplosionEntityData> m_triggeredExplosion; // 0x20 (32)
		CtrRef<ExplosionEntityData> m_removalExplosion; // 0x28 (40)
	}; // 0x30 (48)
}

