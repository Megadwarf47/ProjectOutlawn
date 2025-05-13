///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ColorTintData.h>
#include <fb/DataContainer.h>
#include <fb/PoissonRadialBlurData.h>

namespace fb {
	class ViewFxData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ViewFxData"); }
		virtual ~ViewFxData() override {}
		ViewFxData() {
			m_blurAdd = 0.f;
			m_poissonRadialBlurEnable = false;
			m_colorTintEnable = false;
		};

		PoissonRadialBlurData m_poissonRadialBlur; // 0x10 (16)
		float m_blurAdd; // 0x24 (36)
		ColorTintData m_colorTint; // 0x30 (48)
		bool m_poissonRadialBlurEnable; // 0x70 (112)
		bool m_colorTintEnable; // 0x71 (113)
	}; // 0x80 (128)
}

