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
	class MultipleTransformEntry;
}

namespace fb {
	class MultipleTransformNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultipleTransformNodeData"); }
		virtual ~MultipleTransformNodeData() override {}
		MultipleTransformNodeData() {
		};

		AudioGraphNodePort m_x; // 0x10 (16)
		RefArray<MultipleTransformEntry> m_transforms; // 0x18 (24)
	}; // 0x20 (32)
}

