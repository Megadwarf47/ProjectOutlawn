///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/TabletCommanderAwardCriteria.h>
#include <fb/TabletCommanderAwardData.h>
#include <fb/TabletCommanderDogTagData.h>

namespace fb {
	struct TabletCommanderAssignment {
		TabletCommanderAssignment() {
		};

		TabletCommanderAwardData m_assignmentAwardData; // 0x0 (0)
		Array<TabletCommanderAwardData> m_dependencies; // 0x30 (48)
		Array<TabletCommanderAwardCriteria> m_criterias; // 0x38 (56)
		Array<TabletCommanderDogTagData> m_dogTags; // 0x40 (64)
	}; // 0x48 (72)
}

