///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/ModsComponentAnimationBinding.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class ModsComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsComponentData"); }
		virtual ~ModsComponentData() override {}
		ModsComponentData() {
			m_activeDuration = 10.f;
			m_accumulationMaximum = 1.f;
			m_accumulationDecay = 0.f;
			m_modUnModTime = 0.2f;
		};

		Vec3 m_modCamOffset; // 0x70 (112)
		float m_activeDuration; // 0x80 (128)
		Array<s32> m_terminateInputs; // 0x88 (136)
		float m_accumulationMaximum; // 0x90 (144)
		float m_accumulationDecay; // 0x94 (148)
		String m_uniqueModName; // 0x98 (152)
		CtrRef<EffectBlueprint> m_modActiveEffect; // 0xA0 (160)
		CtrRef<EffectBlueprint> m_localModActiveEffect; // 0xA8 (168)
		float m_modUnModTime; // 0xB0 (176)
		ModsComponentAnimationBinding m_modAnimationBinding; // 0xB4 (180)
	}; // 0xD0 (208)
}

