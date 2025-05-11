///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundScopeStageData.h>

namespace fb {
	class MaxInstancesScopeStageData : public SoundScopeStageData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaxInstancesScopeStageData"); }
		virtual ~MaxInstancesScopeStageData() override {}
		MaxInstancesScopeStageData() {
			m_count = 0;
			m_keepOldest = false;
		};

		u32 m_count; // 0x10 (16)
		bool m_keepOldest; // 0x14 (20)
	}; // 0x18 (24)
}

