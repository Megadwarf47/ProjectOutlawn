///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverArithmeticExpressionType.h>
#include <fb/VoiceOverExpressionNode.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverArithmeticNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverArithmeticNode"); }
		virtual ~VoiceOverArithmeticNode() override {}
		VoiceOverArithmeticNode() {
			m_operation = VoiceOverArithmeticExpressionType::VoiceOverArithmeticExpressionType_Addition;
		};

		VoiceOverValueConnection m_a; // 0x10 (16)
		VoiceOverValueConnection m_b; // 0x20 (32)
		CtrRef<VoiceOverValue> m_result; // 0x30 (48)
		VoiceOverArithmeticExpressionType m_operation; // 0x38 (56)
	}; // 0x40 (64)
}

