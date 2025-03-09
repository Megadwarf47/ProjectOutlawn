///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnAnimationData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnAnimationData"); }
		virtual ~SpawnAnimationData() override {}
		SpawnAnimationData() {
			m_animationSpeed = 1.f;
			m_basedOnLifetime = false;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_animationSpeed; // 0x28 (40)
		bool m_basedOnLifetime; // 0x2C (44)
	}; // 0x30 (48)
}

