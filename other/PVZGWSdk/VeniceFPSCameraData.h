///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FPSCameraData.h>

namespace fb {
	class VeniceFPSCameraData : public FPSCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceFPSCameraData"); }
		virtual ~VeniceFPSCameraData() override {}
		VeniceFPSCameraData() {
			m_suppressionBlurAmountMultiplier = 2.f;
			m_suppressionBlurSizeMultiplier = 1.f;
		};

		float m_suppressionBlurAmountMultiplier; // 0x110 (272)
		float m_suppressionBlurSizeMultiplier; // 0x114 (276)
	}; // 0x120 (288)
}

