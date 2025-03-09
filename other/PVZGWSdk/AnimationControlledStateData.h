///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class AnimationControlledStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationControlledStateData"); }
		virtual ~AnimationControlledStateData() override {}
		AnimationControlledStateData() {
			m_upNormalTolerance = 0.f;
		};

		float m_upNormalTolerance; // 0x18 (24)
	}; // 0x20 (32)
}

