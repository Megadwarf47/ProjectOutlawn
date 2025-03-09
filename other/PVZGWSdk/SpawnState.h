///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>

namespace fb {
	class SpawnState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnState"); }
		virtual ~SpawnState() override {}
		SpawnState() {
			m_team = 0;
		};

		s32 m_team; // 0x20 (32)
	}; // 0x28 (40)
}

