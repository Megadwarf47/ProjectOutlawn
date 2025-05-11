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
	class LinkReceiveNodeEntry;
}

namespace fb {
	class LinkReceiveNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkReceiveNodeData"); }
		virtual ~LinkReceiveNodeData() override {}
		LinkReceiveNodeData() {
		};

		RefArray<LinkReceiveNodeEntry> m_entries; // 0x10 (16)
	}; // 0x18 (24)
}

