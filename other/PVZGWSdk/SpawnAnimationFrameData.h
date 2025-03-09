///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnAnimationFrameData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnAnimationFrameData"); }
		virtual ~SpawnAnimationFrameData() override {}
		SpawnAnimationFrameData() {
			m_animationFrame = 0;

			m_evaluatorInput = EmittableField::EfOne;
		};

		u32 m_animationFrame; // 0x28 (40)
	}; // 0x30 (48)
}

