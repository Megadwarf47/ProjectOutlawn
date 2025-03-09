///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class VoiceOverExpressionNode;
	class VoiceOverValue;
}

namespace fb {
	struct VoiceOverValueConnection {
		VoiceOverValueConnection() {
		};

		CtrRef<VoiceOverExpressionNode> m_targetNode; // 0x0 (0)
		CtrRef<VoiceOverValue> m_targetValue; // 0x8 (8)
	}; // 0x10 (16)
}

