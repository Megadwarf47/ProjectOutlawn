///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>

namespace fb {
	class DeltaGroup : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeltaGroup"); }
		virtual ~DeltaGroup() override {}
		DeltaGroup() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_delta; // 0x18 (24)
	}; // 0x20 (32)
}

