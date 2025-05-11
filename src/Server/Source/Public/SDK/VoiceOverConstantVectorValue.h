///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Vec4.h>
#include <fb/VoiceOverConstantValue.h>

namespace fb {
	class VoiceOverConstantVectorValue : public VoiceOverConstantValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConstantVectorValue"); }
		virtual ~VoiceOverConstantVectorValue() override {}
		VoiceOverConstantVectorValue() {
		};

		Vec4 m_value; // 0x10 (16)
	}; // 0x20 (32)
}

