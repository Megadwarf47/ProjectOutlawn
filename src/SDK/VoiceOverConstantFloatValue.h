///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverConstantValue.h>

namespace fb {
	class VoiceOverConstantFloatValue : public VoiceOverConstantValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConstantFloatValue"); }
		virtual ~VoiceOverConstantFloatValue() override {}
		VoiceOverConstantFloatValue() {
			m_value = 0.f;
		};

		float m_value; // 0x10 (16)
	}; // 0x18 (24)
}

