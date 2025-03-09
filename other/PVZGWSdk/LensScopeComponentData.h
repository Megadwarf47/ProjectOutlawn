///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class LensScopeComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LensScopeComponentData"); }
		virtual ~LensScopeComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LensScopeComponentData() {
			m_chromaticAberrationColor1 = Vec3(0.f, 0.707f, 0.707f);
			m_chromaticAberrationColor2 = Vec3(0.707f, 0.f, 0.707f);
			m_realm = Realm::Realm_Client;
			m_blurScale = 0.999f;
			m_blurCenter = Vec2(0.5f, 0.5f);
			m_chromaticAberrationStrengths = Vec2(0.2f, 0.2f);
			m_chromaticAberrationDisplacement1 = Vec2(-0.002f, 0.004f);
			m_chromaticAberrationDisplacement2 = Vec2(0.006f, 0.f);
			m_radialBlendDistanceCoefficients = Vec2(4.f, -0.5f);
			m_enable = false;
		};

		Vec3 m_chromaticAberrationColor1; // 0x80 (128)
		Vec3 m_chromaticAberrationColor2; // 0x90 (144)
		Realm m_realm; // 0xA0 (160)
		float m_blurScale; // 0xA4 (164)
		Vec2 m_blurCenter; // 0xA8 (168)
		Vec2 m_chromaticAberrationStrengths; // 0xB0 (176)
		Vec2 m_chromaticAberrationDisplacement1; // 0xB8 (184)
		Vec2 m_chromaticAberrationDisplacement2; // 0xC0 (192)
		Vec2 m_radialBlendDistanceCoefficients; // 0xC8 (200)
		bool m_enable; // 0xD0 (208)
	}; // 0xE0 (224)
}

