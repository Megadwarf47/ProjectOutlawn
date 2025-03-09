///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnPointCloudData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnPointCloudData"); }
		virtual ~SpawnPointCloudData() override {}
		SpawnPointCloudData() {
			m_evaluatorInput = EmittableField::EfOne;
		};

	}; // 0x28 (40)
}

