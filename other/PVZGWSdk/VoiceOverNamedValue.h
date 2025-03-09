///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/VoiceOverValue.h>
#include <fb/VoiceOverValueType.h>

namespace fb {
	class VoiceOverNamedValue : public VoiceOverValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverNamedValue"); }
		virtual ~VoiceOverNamedValue() override {}
		VoiceOverNamedValue() {
			m_nameHash = 0;
			m_valueType = VoiceOverValueType::VoiceOverValueType_Boolean;
		};

		String m_name; // 0x10 (16)
		u32 m_nameHash; // 0x18 (24)
		VoiceOverValueType m_valueType; // 0x1C (28)
	}; // 0x20 (32)
}

