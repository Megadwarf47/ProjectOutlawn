///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class KeepAliveNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KeepAliveNodeData"); }
		virtual ~KeepAliveNodeData() override {}
		KeepAliveNodeData() {
		};

		AudioGraphNodePort m_keepAlive; // 0x10 (16)
	}; // 0x18 (24)
}

