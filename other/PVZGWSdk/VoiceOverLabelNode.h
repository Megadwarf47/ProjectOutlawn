///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverExpressionNode.h>
#include <fb/VoiceOverLabelCompareMode.h>
#include <fb/VoiceOverLabelSourceMode.h>

namespace fb {
	class VoiceOverLabel;
	class VoiceOverLabelSource;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverLabelNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLabelNode"); }
		virtual ~VoiceOverLabelNode() override {}
		VoiceOverLabelNode() {
			m_sourceMode = VoiceOverLabelSourceMode::VoiceOverLabelSourceMode_Combined;
			m_wantedCompareMode = VoiceOverLabelCompareMode::VoiceOverLabelCompareMode_Any;
			m_unwantedCompareMode = VoiceOverLabelCompareMode::VoiceOverLabelCompareMode_Any;
		};

		RefArray<VoiceOverLabelSource> m_sources; // 0x10 (16)
		CtrRef<VoiceOverValue> m_false; // 0x18 (24)
		CtrRef<VoiceOverValue> m_true; // 0x20 (32)
		RefArray<VoiceOverLabel> m_wantedLabels; // 0x28 (40)
		RefArray<VoiceOverLabel> m_unwantedLabels; // 0x30 (48)
		VoiceOverLabelSourceMode m_sourceMode; // 0x38 (56)
		VoiceOverLabelCompareMode m_wantedCompareMode; // 0x3C (60)
		VoiceOverLabelCompareMode m_unwantedCompareMode; // 0x40 (64)
	}; // 0x48 (72)
}

