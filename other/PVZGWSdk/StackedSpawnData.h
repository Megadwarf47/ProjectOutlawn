///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExtraSpawnData.h>
#include <fb/StackedSpawningBehaviour.h>

namespace fb {
	class StackedSpawnData : public ExtraSpawnData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StackedSpawnData"); }
		virtual ~StackedSpawnData() override {}
		StackedSpawnData() {
			m_behaviour = StackedSpawningBehaviour::StackedSpawningBehaviour_Fill;
		};

		StackedSpawningBehaviour m_behaviour; // 0x10 (16)
	}; // 0x18 (24)
}

