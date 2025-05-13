///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class ReceivingSupplySphereComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ReceivingSupplySphereComponentData"); }
		virtual ~ReceivingSupplySphereComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ReceivingSupplySphereComponentData() {
			m_vfxEnabled = true;
		};

		CtrRef<EffectBlueprint> m_receivingHealingEffect; // 0x70 (112)
		CtrRef<EffectBlueprint> m_receivingDamageEffect; // 0x78 (120)
		CtrRef<EffectBlueprint> m_receivingAmmoEffect; // 0x80 (128)
		CtrRef<EffectBlueprint> m_receivingDynamicSpeedModifierEffect; // 0x88 (136)
		bool m_vfxEnabled; // 0x90 (144)
	}; // 0xA0 (160)
}

