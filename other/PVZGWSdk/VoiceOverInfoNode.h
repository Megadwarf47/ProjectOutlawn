///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverExpressionNode.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverNamedValue;
	class VoiceOverObject;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverInfoNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverInfoNode"); }
		virtual ~VoiceOverInfoNode() override {}
		VoiceOverInfoNode() {
		};

		VoiceOverValueConnection m_object; // 0x10 (16)
		CtrRef<VoiceOverValue> m_value; // 0x20 (32)
		CtrRef<VoiceOverNamedValue> m_field; // 0x28 (40)
		CtrRef<VoiceOverObject> m_expectedType; // 0x30 (48)
	}; // 0x38 (56)
}

