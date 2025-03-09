///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/Vec4.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class DamageEffectComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageEffectComponentData"); }
		virtual ~DamageEffectComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DamageEffectComponentData() {
			m_realm = Realm::Realm_Client;
			m_frameWidth = 0.5f;
			m_outerFrameOpacity = 1.f;
			m_innerFrameOpacity = 1.f;
			m_fallofTime = 0.f;
			m_minDamagePercentageThreshold = 0.f;
			m_maxOpacityDamagePercentage = 0.f;
			m_startCriticalEffectHealthThreshold = 0.f;
			m_endCriticalEffectHealthThreshold = 0.f;
			m_debugDamage = false;
		};

		Vec4 m_topDamage; // 0x80 (128)
		Vec4 m_leftDamage; // 0x90 (144)
		Vec4 m_bottomDamage; // 0xA0 (160)
		Vec4 m_rightDamage; // 0xB0 (176)
		Realm m_realm; // 0xC0 (192)
		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0xC8 (200)
		float m_frameWidth; // 0xD0 (208)
		float m_outerFrameOpacity; // 0xD4 (212)
		float m_innerFrameOpacity; // 0xD8 (216)
		float m_fallofTime; // 0xDC (220)
		float m_minDamagePercentageThreshold; // 0xE0 (224)
		float m_maxOpacityDamagePercentage; // 0xE4 (228)
		float m_startCriticalEffectHealthThreshold; // 0xE8 (232)
		float m_endCriticalEffectHealthThreshold; // 0xEC (236)
		bool m_debugDamage; // 0xF0 (240)
	}; // 0x100 (256)
}

