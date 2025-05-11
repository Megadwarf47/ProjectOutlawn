///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundScopeStageData.h>

namespace fb {
	class DuplicateSpawnScopeStageData : public SoundScopeStageData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DuplicateSpawnScopeStageData"); }
		virtual ~DuplicateSpawnScopeStageData() override {}
		DuplicateSpawnScopeStageData() {
			m_time = 0.f;
			m_distance = 0.f;
			m_closestCount = 0;
			m_groupTypes = true;
		};

		float m_time; // 0x10 (16)
		float m_distance; // 0x14 (20)
		u32 m_closestCount; // 0x18 (24)
		bool m_groupTypes; // 0x1C (28)
	}; // 0x20 (32)
}

