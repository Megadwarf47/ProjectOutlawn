///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverEvent;
	class VoiceOverValueRedirect;
}

namespace fb {
	class VoiceOverEventNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverEventNodeConfigData"); }
		virtual ~VoiceOverEventNodeConfigData() override {}
		VoiceOverEventNodeConfigData() {
		};

		RefArray<VoiceOverValueRedirect> m_redirects; // 0x18 (24)
		CtrRef<VoiceOverEvent> m_event; // 0x20 (32)
	}; // 0x28 (40)
}

