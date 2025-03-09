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
	class MinMaxNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MinMaxNodeData"); }
		virtual ~MinMaxNodeData() override {}
		MinMaxNodeData() {
		};

		AudioGraphNodePort m_x; // 0x10 (16)
		AudioGraphNodePort m_y; // 0x18 (24)
		AudioGraphNodePort m_max; // 0x20 (32)
		AudioGraphNodePort m_min; // 0x28 (40)
	}; // 0x30 (48)
}

