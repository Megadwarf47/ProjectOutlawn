///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverCompareExpressionType.h>
#include <fb/VoiceOverExpressionNode.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverCompareNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverCompareNode"); }
		virtual ~VoiceOverCompareNode() override {}
		VoiceOverCompareNode() {
			m_operation = VoiceOverCompareExpressionType::VoiceOverCompareExpressionType_Equals;
		};

		VoiceOverValueConnection m_a; // 0x10 (16)
		VoiceOverValueConnection m_b; // 0x20 (32)
		CtrRef<VoiceOverValue> m_false; // 0x30 (48)
		CtrRef<VoiceOverValue> m_true; // 0x38 (56)
		VoiceOverCompareExpressionType m_operation; // 0x40 (64)
	}; // 0x48 (72)
}

