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
	class VoiceOverIntervalNode;
	class VoiceOverStructureNode;
	class VoiceOverValueRedirect;
}

namespace fb {
	class VoiceOverEventNode : public VoiceOverStructureNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverEventNode"); }
		virtual ~VoiceOverEventNode() override {}
		VoiceOverEventNode() {
		};

		CtrRef<VoiceOverIntervalNode> m_interval; // 0x18 (24)
		RefArray<VoiceOverStructureNode> m_relationship; // 0x20 (32)
		RefArray<VoiceOverValueRedirect> m_redirects; // 0x28 (40)
		CtrRef<VoiceOverEvent> m_event; // 0x30 (48)
	}; // 0x38 (56)
}

