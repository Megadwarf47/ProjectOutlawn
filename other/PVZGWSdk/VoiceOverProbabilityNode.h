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
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverProbabilityNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverProbabilityNode"); }
		virtual ~VoiceOverProbabilityNode() override {}
		VoiceOverProbabilityNode() {
			m_probability = 100.f;
		};

		CtrRef<VoiceOverValue> m_false; // 0x10 (16)
		CtrRef<VoiceOverValue> m_true; // 0x18 (24)
		float m_probability; // 0x20 (32)
	}; // 0x28 (40)
}

