///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class ColorCorrectionComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ColorCorrectionComponentData"); }
		virtual ~ColorCorrectionComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ColorCorrectionComponentData() {
			m_brightness = Vec3(1.f, 1.f, 1.f);
			m_contrast = Vec3(1.f, 1.f, 1.f);
			m_saturation = Vec3(1.f, 1.f, 1.f);
			m_realm = Realm::Realm_Client;
			m_hue = 0.f;
			m_enable = false;
			m_colorGradingEnable = false;
		};

		Vec3 m_brightness; // 0x80 (128)
		Vec3 m_contrast; // 0x90 (144)
		Vec3 m_saturation; // 0xA0 (160)
		Realm m_realm; // 0xB0 (176)
		float m_hue; // 0xB4 (180)
		CtrRef<TextureAsset> m_colorGradingTexture; // 0xB8 (184)
		bool m_enable; // 0xC0 (192)
		bool m_colorGradingEnable; // 0xC1 (193)
	}; // 0xD0 (208)
}

