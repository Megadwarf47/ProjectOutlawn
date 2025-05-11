///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverConstantValue.h>

namespace fb {
	class VoiceOverConstantBooleanValue : public VoiceOverConstantValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConstantBooleanValue"); }
		virtual ~VoiceOverConstantBooleanValue() override {}
		VoiceOverConstantBooleanValue() {
			m_value = false;
		};

		bool m_value; // 0x10 (16)
	}; // 0x18 (24)
}

