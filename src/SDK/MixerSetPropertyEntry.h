///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/CtrRef.h>

namespace fb {
	class MixGroup;
}

namespace fb {
	class MixerSetPropertyEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerSetPropertyEntry"); }
		virtual ~MixerSetPropertyEntry() override {}
		MixerSetPropertyEntry() {
			m_target = 0;
			m_attackTime = 0.1f;
			m_releaseTime = 0.2f;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		u32 m_target; // 0x18 (24)
		CtrRef<MixGroup> m_group; // 0x20 (32)
		float m_attackTime; // 0x28 (40)
		float m_releaseTime; // 0x2C (44)
	}; // 0x30 (48)
}

