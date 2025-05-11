///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class SoundTestTaskParam;
	class SoundTestTaskSpec;
}

namespace fb {
	class SoundTestTask : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestTask"); }
		virtual ~SoundTestTask() override {}
		SoundTestTask() {
			m_startTime = 0.f;
			m_repetitions = 1;
		};

		CtrRef<SoundTestTaskSpec> m_spec; // 0x10 (16)
		CtrRef<SoundTestTaskParam> m_param; // 0x18 (24)
		float m_startTime; // 0x20 (32)
		u32 m_repetitions; // 0x24 (36)
	}; // 0x28 (40)
}

