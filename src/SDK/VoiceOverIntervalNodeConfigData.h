///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverInterval;
}

namespace fb {
	class VoiceOverIntervalNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverIntervalNodeConfigData"); }
		virtual ~VoiceOverIntervalNodeConfigData() override {}
		VoiceOverIntervalNodeConfigData() {
		};

		CtrRef<VoiceOverInterval> m_interval; // 0x18 (24)
	}; // 0x20 (32)
}

