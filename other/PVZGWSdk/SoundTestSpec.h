///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class SoundTestTask;
}

namespace fb {
	class SoundTestSpec : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestSpec"); }
		virtual ~SoundTestSpec() override {}
		SoundTestSpec() {
			m_duration = 5.f;
		};

		String m_name; // 0x10 (16)
		String m_description; // 0x18 (24)
		CtrRef<SoundTestTask> m_mainStartTask; // 0x20 (32)
		CtrRef<SoundTestTask> m_mainStopTask; // 0x28 (40)
		float m_duration; // 0x30 (48)
		RefArray<SoundTestTask> m_tasks; // 0x38 (56)
	}; // 0x40 (64)
}

