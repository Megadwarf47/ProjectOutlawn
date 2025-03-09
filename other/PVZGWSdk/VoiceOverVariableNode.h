///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverExpressionNode.h>

namespace fb {
	class VoiceOverNamedValue;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverVariableNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverVariableNode"); }
		virtual ~VoiceOverVariableNode() override {}
		VoiceOverVariableNode() {
		};

		CtrRef<VoiceOverValue> m_value; // 0x10 (16)
		CtrRef<VoiceOverNamedValue> m_source; // 0x18 (24)
	}; // 0x20 (32)
}

