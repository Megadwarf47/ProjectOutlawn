///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnSpeedData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnSpeedData"); }
		virtual ~SpawnSpeedData() override {}
		SpawnSpeedData() {
			m_speed = 0.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_speed; // 0x28 (40)
	}; // 0x30 (48)
}

