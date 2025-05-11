///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class SoundScopeStrategyData;
}

namespace fb {
	class SoundScopeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundScopeData"); }
		virtual ~SoundScopeData() override {}
		SoundScopeData() {
		};

		String m_name; // 0x10 (16)
		CtrRef<SoundScopeStrategyData> m_defaultStrategy; // 0x18 (24)
	}; // 0x20 (32)
}

