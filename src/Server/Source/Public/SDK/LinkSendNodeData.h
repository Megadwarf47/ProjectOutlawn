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
	class LinkSendNodeEntry;
}

namespace fb {
	class LinkSendNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkSendNodeData"); }
		virtual ~LinkSendNodeData() override {}
		LinkSendNodeData() {
		};

		RefArray<LinkSendNodeEntry> m_entries; // 0x10 (16)
	}; // 0x18 (24)
}

