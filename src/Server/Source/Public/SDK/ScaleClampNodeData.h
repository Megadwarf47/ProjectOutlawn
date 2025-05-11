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
	class ScaleClampNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScaleClampNodeData"); }
		virtual ~ScaleClampNodeData() override {}
		ScaleClampNodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_inMin; // 0x18 (24)
		AudioGraphNodePort m_inMax; // 0x20 (32)
		AudioGraphNodePort m_outMin; // 0x28 (40)
		AudioGraphNodePort m_outMax; // 0x30 (48)
		AudioGraphNodePort m_out; // 0x38 (56)
	}; // 0x40 (64)
}

