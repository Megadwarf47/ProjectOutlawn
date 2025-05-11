///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnRotationSpeedData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnRotationSpeedData"); }
		virtual ~SpawnRotationSpeedData() override {}
		SpawnRotationSpeedData() {
			m_rotationSpeed = 1.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_rotationSpeed; // 0x28 (40)
	}; // 0x30 (48)
}

