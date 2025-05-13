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
	class VoiceOverInterval;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverIntervalNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverIntervalNode"); }
		virtual ~VoiceOverIntervalNode() override {}
		VoiceOverIntervalNode() {
		};

		VoiceOverValueConnection m_threshold; // 0x10 (16)
		CtrRef<VoiceOverValue> m_time; // 0x20 (32)
		CtrRef<VoiceOverValue> m_false; // 0x28 (40)
		CtrRef<VoiceOverValue> m_true; // 0x30 (48)
		CtrRef<VoiceOverInterval> m_interval; // 0x38 (56)
	}; // 0x40 (64)
}

