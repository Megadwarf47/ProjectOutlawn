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
	class PadRumbleNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PadRumbleNodeData"); }
		virtual ~PadRumbleNodeData() override {}
		PadRumbleNodeData() {
		};

		AudioGraphNodePort m_rumbleHigh; // 0x10 (16)
		AudioGraphNodePort m_rumbleLow; // 0x18 (24)
	}; // 0x20 (32)
}

