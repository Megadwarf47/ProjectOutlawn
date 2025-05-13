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
	class Crossfader2NodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Crossfader2NodeData"); }
		virtual ~Crossfader2NodeData() override {}
		Crossfader2NodeData() {
		};

		AudioGraphNodePort m_ctrl; // 0x10 (16)
		AudioGraphNodePort m_ctrlOut1; // 0x18 (24)
		AudioGraphNodePort m_ctrlOut2; // 0x20 (32)
	}; // 0x28 (40)
}

