///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverLogicFlowMode.h>
#include <fb/VoiceOverNode.h>

namespace fb {
	class VoiceOverStructureNode : public VoiceOverNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverStructureNode"); }
		virtual ~VoiceOverStructureNode() override {}
		VoiceOverStructureNode() {
			m_flowMode = VoiceOverLogicFlowMode::VoiceOverLogicFlowMode_One;
		};

		VoiceOverLogicFlowMode m_flowMode; // 0x10 (16)
	}; // 0x18 (24)
}

