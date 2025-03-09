///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class AnimatedTransformEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedTransformEntityData"); }
		virtual ~AnimatedTransformEntityData() override {}
		AnimatedTransformEntityData() {
			m_externalTime = -1.f;
		};

		AntRef m_animatable; // 0x18 (24)
		AntRef m_controller; // 0x2C (44)
		String m_boneName; // 0x40 (64)
		float m_externalTime; // 0x48 (72)
	}; // 0x50 (80)
}

