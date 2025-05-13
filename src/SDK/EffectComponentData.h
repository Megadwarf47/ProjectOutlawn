///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class EffectBlueprint;
	class EffectParameter;
}

namespace fb {
	class EffectComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectComponentData"); }
		virtual ~EffectComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		EffectComponentData() {
			m_emitterParameter1 = 0.f;
			m_emitterParameter2 = 0.f;
			m_emitterParameter3 = 0.f;
			m_overrideHeight = 0.f;
			m_maxInstances = 1;
			m_autoStart = false;
			m_snapToWaterSurface = false;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x70 (112)
		float m_emitterParameter1; // 0x78 (120)
		float m_emitterParameter2; // 0x7C (124)
		float m_emitterParameter3; // 0x80 (128)
		float m_overrideHeight; // 0x84 (132)
		s32 m_maxInstances; // 0x88 (136)
		RefArray<EffectParameter> m_effectParameters; // 0x90 (144)
		bool m_autoStart; // 0x98 (152)
		bool m_snapToWaterSurface; // 0x99 (153)
	}; // 0xA0 (160)
}

