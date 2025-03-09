///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class AudioGraphNodeData;
}

namespace fb {
	struct MixerPresetNodeData {
		MixerPresetNodeData() {
			m_value = 0.f;
		};

		CtrRef<AudioGraphNodeData> m_node; // 0x0 (0)
		float m_value; // 0x8 (8)
	}; // 0x10 (16)
}

