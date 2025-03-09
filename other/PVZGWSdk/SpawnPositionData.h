///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnPositionData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnPositionData"); }
		virtual ~SpawnPositionData() override {}
		SpawnPositionData() {
			m_evaluatorInput = EmittableField::EfOne;
		};

	}; // 0x28 (40)
}

