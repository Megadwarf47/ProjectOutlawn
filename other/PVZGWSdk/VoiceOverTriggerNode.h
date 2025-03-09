///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverStructureNode.h>

namespace fb {
	class VoiceOverEvent;
	class VoiceOverTriggerParameter;
}

namespace fb {
	class VoiceOverTriggerNode : public VoiceOverStructureNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverTriggerNode"); }
		virtual ~VoiceOverTriggerNode() override {}
		VoiceOverTriggerNode() {
			m_delay = 0.f;
		};

		RefArray<VoiceOverTriggerParameter> m_parameters; // 0x18 (24)
		float m_delay; // 0x20 (32)
		CtrRef<VoiceOverEvent> m_event; // 0x28 (40)
	}; // 0x30 (48)
}

