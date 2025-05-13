///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PoseTransitionBase.h>

namespace fb {
	class BlendedPoseTransition : public PoseTransitionBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlendedPoseTransition"); }
		virtual ~BlendedPoseTransition() override {}
		BlendedPoseTransition() {
			m_blendTime = 1.f;
		};

		float m_blendTime; // 0x18 (24)
	}; // 0x20 (32)
}

