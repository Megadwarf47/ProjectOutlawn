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
	class DeMuxOutput;
}

namespace fb {
	class DeMuxNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeMuxNodeData"); }
		virtual ~DeMuxNodeData() override {}
		DeMuxNodeData() {
			m_wrapValue = true;
		};

		RefArray<DeMuxOutput> m_outputs; // 0x10 (16)
		AudioGraphNodePort m_trigger; // 0x18 (24)
		AudioGraphNodePort m_value; // 0x20 (32)
		bool m_wrapValue; // 0x28 (40)
	}; // 0x30 (48)
}

