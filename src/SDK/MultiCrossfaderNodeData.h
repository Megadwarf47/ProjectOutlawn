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
	class MultiCrossfaderGroup;
}

namespace fb {
	class MultiCrossfaderNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultiCrossfaderNodeData"); }
		virtual ~MultiCrossfaderNodeData() override {}
		MultiCrossfaderNodeData() {
			m_lockControlValue = false;
		};

		RefArray<MultiCrossfaderGroup> m_crossfaderGroups; // 0x10 (16)
		AudioGraphNodePort m_start; // 0x18 (24)
		AudioGraphNodePort m_stop; // 0x20 (32)
		AudioGraphNodePort m_control; // 0x28 (40)
		bool m_lockControlValue; // 0x30 (48)
	}; // 0x38 (56)
}

