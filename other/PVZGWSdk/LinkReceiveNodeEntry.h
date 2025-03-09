///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/CtrRef.h>

namespace fb {
	class LinkSendNodeEntry;
}

namespace fb {
	class LinkReceiveNodeEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkReceiveNodeEntry"); }
		virtual ~LinkReceiveNodeEntry() override {}
		LinkReceiveNodeEntry() {
		};

		AudioGraphNodePort m_output; // 0x10 (16)
		CtrRef<LinkSendNodeEntry> m_sender; // 0x18 (24)
	}; // 0x20 (32)
}

