///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnSizeData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnSizeData"); }
		virtual ~SpawnSizeData() override {}
		SpawnSizeData() {
			m_size = 1.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_size; // 0x28 (40)
	}; // 0x30 (48)
}

