///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LocalPlayerIndex.h>
#include <fb/ViewDefinition.h>

namespace fb {
	struct PlayerViewDefinition {
		PlayerViewDefinition() {
			m_locaPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_0;
		};

		LocalPlayerIndex m_locaPlayerIndex; // 0x0 (0)
		Array<ViewDefinition> m_views; // 0x8 (8)
	}; // 0x10 (16)
}

