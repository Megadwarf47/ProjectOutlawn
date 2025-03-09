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
	class VoiceOverNamedValue;
}

namespace fb {
	class VoiceOverVariableNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverVariableNodeConfigData"); }
		virtual ~VoiceOverVariableNodeConfigData() override {}
		VoiceOverVariableNodeConfigData() {
		};

		CtrRef<VoiceOverNamedValue> m_source; // 0x18 (24)
	}; // 0x20 (32)
}

