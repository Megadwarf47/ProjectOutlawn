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
	class VoiceOverDistanceNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDistanceNode"); }
		virtual ~VoiceOverDistanceNode() override {}
		VoiceOverDistanceNode() {
			m_operation = VoiceOverCompareExpressionType::VoiceOverCompareExpressionType_Equals;
		};

		VoiceOverValueConnection m_a; // 0x10 (16)
		VoiceOverValueConnection m_b; // 0x20 (32)
		VoiceOverValueConnection m_threshold; // 0x30 (48)
		CtrRef<VoiceOverValue> m_distance; // 0x40 (64)
		CtrRef<VoiceOverValue> m_false; // 0x48 (72)
		CtrRef<VoiceOverValue> m_true; // 0x50 (80)
		VoiceOverCompareExpressionType m_operation; // 0x58 (88)
	}; // 0x60 (96)
}

