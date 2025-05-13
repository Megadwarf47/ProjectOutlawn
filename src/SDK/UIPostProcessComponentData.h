///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class UIPostProcessComponentData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPostProcessComponentData"); }
		virtual ~UIPostProcessComponentData() override {}
		UIPostProcessComponentData() {
			m_xPower = 1.f;
			m_yPower = 1.f;
			m_slices = 4.f;
			m_timeScale = 1.f;
			m_rShift = 0.025f;
			m_gShift = 0.f;
			m_bShift = 0.f;
			m_scanlinesVerticalWrap = 36.f;
		};

		float m_xPower; // 0x30 (48)
		float m_yPower; // 0x34 (52)
		float m_slices; // 0x38 (56)
		float m_timeScale; // 0x3C (60)
		float m_rShift; // 0x40 (64)
		float m_gShift; // 0x44 (68)
		float m_bShift; // 0x48 (72)
		float m_scanlinesVerticalWrap; // 0x4C (76)
		CtrRef<TextureAsset> m_noiseTexture; // 0x50 (80)
		CtrRef<TextureAsset> m_scanlinesTexture; // 0x58 (88)
	}; // 0x60 (96)
}

