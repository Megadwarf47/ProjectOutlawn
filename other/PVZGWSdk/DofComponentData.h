///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlurFilter.h>
#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class DofComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DofComponentData"); }
		virtual ~DofComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DofComponentData() {
			m_realm = Realm::Realm_Client;
			m_focusDistance = 5.f;
			m_blurFactor = 1.f;
			m_blurAdd = 0.f;
			m_simpleDofBlurFilter = BlurFilter::BfGaussian9Pixels;
			m_simpleDofMaxBlur = 3.f;
			m_simpleDofNearStart = 5.f;
			m_simpleDofNearEnd = 7.f;
			m_simpleDofFarStart = 5.f;
			m_simpleDofFarEnd = 7.f;
			m_hipToIronsightsFade = 1.f;
			m_ironsightsDofStartFade = 0.5f;
			m_ironsightsFocalDistance = 1.5f;
			m_ironsightsDofCircleDistance = 0.35f;
			m_spriteDofNearStart = 5.f;
			m_spriteDofNearEnd = 7.f;
			m_spriteDofFarStart = 5.f;
			m_spriteDofFarEnd = 7.f;
			m_spriteDofMaxBlur = 6.f;
			m_enable = false;
			m_debugDrawFocusPlane = false;
			m_ironsightsDofActive = false;
			m_ironsightsDofCircleBlur = false;
		};

		Realm m_realm; // 0x80 (128)
		float m_focusDistance; // 0x84 (132)
		float m_blurFactor; // 0x88 (136)
		float m_blurAdd; // 0x8C (140)
		BlurFilter m_simpleDofBlurFilter; // 0x90 (144)
		float m_simpleDofMaxBlur; // 0x94 (148)
		float m_simpleDofNearStart; // 0x98 (152)
		float m_simpleDofNearEnd; // 0x9C (156)
		float m_simpleDofFarStart; // 0xA0 (160)
		float m_simpleDofFarEnd; // 0xA4 (164)
		float m_hipToIronsightsFade; // 0xA8 (168)
		float m_ironsightsDofStartFade; // 0xAC (172)
		float m_ironsightsFocalDistance; // 0xB0 (176)
		float m_ironsightsDofCircleDistance; // 0xB4 (180)
		float m_spriteDofNearStart; // 0xB8 (184)
		float m_spriteDofNearEnd; // 0xBC (188)
		float m_spriteDofFarStart; // 0xC0 (192)
		float m_spriteDofFarEnd; // 0xC4 (196)
		float m_spriteDofMaxBlur; // 0xC8 (200)
		CtrRef<TextureAsset> m_spriteDofBokehTexture; // 0xD0 (208)
		bool m_enable; // 0xD8 (216)
		bool m_debugDrawFocusPlane; // 0xD9 (217)
		bool m_ironsightsDofActive; // 0xDA (218)
		bool m_ironsightsDofCircleBlur; // 0xDB (219)
	}; // 0xE0 (224)
}

