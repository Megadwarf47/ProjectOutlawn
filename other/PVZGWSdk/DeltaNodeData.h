///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/RefArray.h>

namespace fb {
	class DeltaGroup;
}

namespace fb {
	class DeltaNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeltaNodeData"); }
		virtual ~DeltaNodeData() override {}
		DeltaNodeData() {
		};

		RefArray<DeltaGroup> m_deltas; // 0x10 (16)
	}; // 0x18 (24)
}

