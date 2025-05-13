///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ClothStateSetupTransition.h>
#include <fb/ClothStateSetupTransitionLookup.h>
#include <fb/Types.h>

namespace fb {
	struct ClothStatesSetup {
		ClothStatesSetup() {
			m_emptyState = 0;
		};

		Array<u32> m_states; // 0x0 (0)
		Array<ClothStateSetupTransitionLookup> m_statesTransitionLookups; // 0x8 (8)
		Array<ClothStateSetupTransition> m_statesTransitions; // 0x10 (16)
		u32 m_emptyState; // 0x18 (24)
	}; // 0x20 (32)
}

