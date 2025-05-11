///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraEntityBaseData.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>

namespace fb {
	class TargetCameraData;
}

namespace fb {
	class TargetCameraEntityData : public CameraEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TargetCameraEntityData"); }
		virtual ~TargetCameraEntityData() override {}
		TargetCameraEntityData() {
			m_fov = 0.f;
		};

		LinearTransform m_offsetTransform; // 0x80 (128)
		CtrRef<TargetCameraData> m_camera; // 0xC0 (192)
		float m_fov; // 0xC8 (200)
	}; // 0xD0 (208)
}

