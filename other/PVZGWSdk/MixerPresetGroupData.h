///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/MixGroupPropertyValue.h>
#include <fb/MixGroupState.h>
#include <fb/Types.h>

namespace fb {
	class MixGroup;
}

namespace fb {
	struct MixerPresetGroupData {
		MixerPresetGroupData() {
			m_state = MixGroupState::MixGroupState_Normal;
			m_attackTime = 0.1f;
			m_releaseTime = 0.2f;
			m_priority = 0;
			m_isDominant = false;
			m_isAdditive = false;
		};

		CtrRef<MixGroup> m_group; // 0x0 (0)
		MixGroupState m_state; // 0x8 (8)
		float m_attackTime; // 0xC (12)
		float m_releaseTime; // 0x10 (16)
		s32 m_priority; // 0x14 (20)
		Array<MixGroupPropertyValue> m_properties; // 0x18 (24)
		bool m_isDominant; // 0x20 (32)
		bool m_isAdditive; // 0x21 (33)
	}; // 0x28 (40)
}

