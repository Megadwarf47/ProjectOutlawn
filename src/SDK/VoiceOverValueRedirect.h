///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverValueRedirect : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverValueRedirect"); }
		virtual ~VoiceOverValueRedirect() override {}
		VoiceOverValueRedirect() {
		};

		CtrRef<VoiceOverValue> m_source; // 0x10 (16)
		CtrRef<VoiceOverValue> m_target; // 0x18 (24)
	}; // 0x20 (32)
}

