///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ETacticType.h>
#include <fb/Types.h>

namespace fb {
	struct TacticInfo {
		TacticInfo() {
			m_tactic = ETacticType::ETactic_Null;
			m_weight = 0.f;
		};

		ETacticType m_tactic; // 0x0 (0)
		float m_weight; // 0x4 (4)
	}; // 0x8 (8)
}

