///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundTestTaskSpec.h>
#include <fb/SoundTestTransformBehavior.h>
#include <fb/Vec3.h>

namespace fb {
	class SoundTestTransformTask : public SoundTestTaskSpec {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestTransformTask"); }
		virtual ~SoundTestTransformTask() override {}
		SoundTestTransformTask() {
			m_behavior = SoundTestTransformBehavior::SoundTestTransformBehavior_Static;
			m_relativeListener = false;
		};

		Vec3 m_initialPosition; // 0x20 (32)
		SoundTestTransformBehavior m_behavior; // 0x30 (48)
		bool m_relativeListener; // 0x34 (52)
	}; // 0x40 (64)
}

