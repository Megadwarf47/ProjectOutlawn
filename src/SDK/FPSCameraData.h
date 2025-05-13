///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlurEffectData.h>
#include <fb/TargetCameraData.h>
#include <fb/TurnEffectData.h>

namespace fb {
	class FPSCameraData : public TargetCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FPSCameraData"); }
		virtual ~FPSCameraData() override {}
		FPSCameraData() {
			m_fov = 0.f;
		};

		TurnEffectData m_turnEffectSettings; // 0xD0 (208)
		BlurEffectData m_blurEffectSettings; // 0xF0 (240)
		float m_fov; // 0x108 (264)
	}; // 0x110 (272)
}

