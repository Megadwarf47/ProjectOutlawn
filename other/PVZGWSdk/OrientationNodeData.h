///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class OrientationNodeEntry;
}

namespace fb {
	class OrientationNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OrientationNodeData"); }
		virtual ~OrientationNodeData() override {}
		OrientationNodeData() {
		};

		AudioGraphNodePort m_listenerAngularVelocity; // 0x10 (16)
		RefArray<OrientationNodeEntry> m_entries; // 0x18 (24)
	}; // 0x20 (32)
}

