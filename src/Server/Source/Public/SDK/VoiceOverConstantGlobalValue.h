///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverConstantValue.h>

namespace fb {
	class VoiceOverGlobalConstantValue;
}

namespace fb {
	class VoiceOverConstantGlobalValue : public VoiceOverConstantValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConstantGlobalValue"); }
		virtual ~VoiceOverConstantGlobalValue() override {}
		VoiceOverConstantGlobalValue() {
		};

		CtrRef<VoiceOverGlobalConstantValue> m_source; // 0x10 (16)
	}; // 0x18 (24)
}

