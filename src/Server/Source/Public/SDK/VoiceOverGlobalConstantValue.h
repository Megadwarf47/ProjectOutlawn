///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class VoiceOverConstantValue;
}

namespace fb {
	class VoiceOverGlobalConstantValue : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverGlobalConstantValue"); }
		virtual ~VoiceOverGlobalConstantValue() override {}
		VoiceOverGlobalConstantValue() {
		};

		String m_name; // 0x10 (16)
		CtrRef<VoiceOverConstantValue> m_source; // 0x18 (24)
	}; // 0x20 (32)
}

