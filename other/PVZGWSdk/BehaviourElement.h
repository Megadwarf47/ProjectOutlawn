///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EBLayerIndex.h>
#include <fb/Types.h>

namespace fb {
	class BehaviourTreeData;
}

namespace fb {
	struct BehaviourElement {
		BehaviourElement() {
			m_layerIndex = EBLayerIndex::EBLayerIndex_1;
			m_interrupt = false;
		};

		EBLayerIndex m_layerIndex; // 0x0 (0)
		CtrRef<BehaviourTreeData> m_behaviourTree; // 0x8 (8)
		bool m_interrupt; // 0x10 (16)
	}; // 0x18 (24)
}

