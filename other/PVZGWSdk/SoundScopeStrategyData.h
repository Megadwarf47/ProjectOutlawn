///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class SoundScopeStageData;
}

namespace fb {
	class SoundScopeStrategyData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundScopeStrategyData"); }
		virtual ~SoundScopeStrategyData() override {}
		SoundScopeStrategyData() {
		};

		String m_name; // 0x10 (16)
		RefArray<SoundScopeStageData> m_stages; // 0x18 (24)
	}; // 0x20 (32)
}

