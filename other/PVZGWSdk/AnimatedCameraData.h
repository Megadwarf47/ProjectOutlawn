///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class SkeletonAsset;
}

namespace fb {
	class AnimatedCameraData : public CameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedCameraData"); }
		virtual ~AnimatedCameraData() override {}
		AnimatedCameraData() {
		};

		CtrRef<SkeletonAsset> m_skeleton; // 0x60 (96)
		String m_cameraBone; // 0x68 (104)
		String m_fovBone; // 0x70 (112)
	}; // 0x80 (128)
}

