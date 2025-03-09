///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/PoseTransitionBase.h>

namespace fb {
	class AnimatedPoseTransition : public PoseTransitionBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedPoseTransition"); }
		virtual ~AnimatedPoseTransition() override {}
		AnimatedPoseTransition() {
			m_animationBlendInTime = -1.f;
			m_transitionAnimationDuration = 0.f;
		};

		AntRef m_transitionAnimation; // 0x18 (24)
		float m_animationBlendInTime; // 0x2C (44)
		float m_transitionAnimationDuration; // 0x30 (48)
	}; // 0x38 (56)
}

