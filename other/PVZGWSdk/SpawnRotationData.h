///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnRotationData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnRotationData"); }
		virtual ~SpawnRotationData() override {}
		SpawnRotationData() {
			m_rotation = 0.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_rotation; // 0x28 (40)
	}; // 0x30 (48)
}

