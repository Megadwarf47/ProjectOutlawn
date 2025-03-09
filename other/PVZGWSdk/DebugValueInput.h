///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/DebugRenderType.h>
#include <fb/String.h>

namespace fb {
	class DebugValueInput : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugValueInput"); }
		virtual ~DebugValueInput() override {}
		DebugValueInput() {
			m_renderType = DebugRenderType::DebugRenderType_Text;
			m_min = -1.f;
			m_max = 1.f;
		};

		AudioGraphNodePort m_v; // 0x10 (16)
		String m_name; // 0x18 (24)
		DebugRenderType m_renderType; // 0x20 (32)
		float m_min; // 0x24 (36)
		float m_max; // 0x28 (40)
	}; // 0x30 (48)
}

