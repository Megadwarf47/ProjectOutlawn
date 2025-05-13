///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraData.h>
#include <fb/HudData.h>

namespace fb {
	class TargetCameraData : public CameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TargetCameraData"); }
		virtual ~TargetCameraData() override {}
		TargetCameraData() {
		};

		HudData m_hud; // 0x60 (96)
	}; // 0xD0 (208)
}

