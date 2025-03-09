///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class MotionBlurComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MotionBlurComponentData"); }
		virtual ~MotionBlurComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		MotionBlurComponentData() {
			m_realm = Realm::Realm_Client;
			m_motionBlurScale = 1.f;
			m_motionBlurCutoffRadius = 0.f;
			m_cutoffGradientScale = 1.f;
			m_radialBlurCenter = Vec2(0.5f, 0.5f);
			m_radialBlurOffset = 0.3f;
			m_radialBlurScale = 0.1f;
			m_motionBlurEnable = true;
			m_motionBlurCentered = false;
			m_radialBlurEnable = false;
		};

		Realm m_realm; // 0x80 (128)
		float m_motionBlurScale; // 0x84 (132)
		float m_motionBlurCutoffRadius; // 0x88 (136)
		float m_cutoffGradientScale; // 0x8C (140)
		Vec2 m_radialBlurCenter; // 0x90 (144)
		float m_radialBlurOffset; // 0x98 (152)
		float m_radialBlurScale; // 0x9C (156)
		bool m_motionBlurEnable; // 0xA0 (160)
		bool m_motionBlurCentered; // 0xA1 (161)
		bool m_radialBlurEnable; // 0xA2 (162)
	}; // 0xB0 (176)
}

