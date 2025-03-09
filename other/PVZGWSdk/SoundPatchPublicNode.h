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
	struct SoundPatchPublicNode {
		SoundPatchPublicNode() {
			m_id = 0;
		};

		CtrRef<AudioGraphNodeData> m_node; // 0x0 (0)
		u32 m_id; // 0x8 (8)
	}; // 0x10 (16)
}

