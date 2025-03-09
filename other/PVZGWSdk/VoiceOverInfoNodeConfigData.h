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
	class VoiceOverObject;
}

namespace fb {
	class VoiceOverInfoNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverInfoNodeConfigData"); }
		virtual ~VoiceOverInfoNodeConfigData() override {}
		VoiceOverInfoNodeConfigData() {
		};

		CtrRef<VoiceOverNamedValue> m_field; // 0x18 (24)
		CtrRef<VoiceOverObject> m_expectedType; // 0x20 (32)
	}; // 0x28 (40)
}

