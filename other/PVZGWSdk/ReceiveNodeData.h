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
	class ReceiveEntry;
}

namespace fb {
	class ReceiveNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ReceiveNodeData"); }
		virtual ~ReceiveNodeData() override {}
		ReceiveNodeData() {
		};

		RefArray<ReceiveEntry> m_entries; // 0x10 (16)
	}; // 0x18 (24)
}

