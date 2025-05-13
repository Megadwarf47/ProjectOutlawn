///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverNamedValue;
}

namespace fb {
	class VoiceOverTriggerParameter : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverTriggerParameter"); }
		virtual ~VoiceOverTriggerParameter() override {}
		VoiceOverTriggerParameter() {
		};

		VoiceOverValueConnection m_source; // 0x10 (16)
		CtrRef<VoiceOverNamedValue> m_eventParameter; // 0x20 (32)
	}; // 0x28 (40)
}

