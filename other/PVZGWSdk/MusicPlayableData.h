///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class MusicPlayableData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPlayableData"); }
		virtual ~MusicPlayableData() override {}
		MusicPlayableData() {
			m_playCount = 1;
			m_minDelay = 0.f;
			m_maxDelay = 0.f;
			m_beatsPerMinute = 0;
			m_beatsPerBar = 0;
			m_gain = 0.f;
			m_pitch = 1.f;
		};

		String m_name; // 0x10 (16)
		u32 m_playCount; // 0x18 (24)
		float m_minDelay; // 0x1C (28)
		float m_maxDelay; // 0x20 (32)
		u32 m_beatsPerMinute; // 0x24 (36)
		u32 m_beatsPerBar; // 0x28 (40)
		float m_gain; // 0x2C (44)
		float m_pitch; // 0x30 (48)
	}; // 0x38 (56)
}

