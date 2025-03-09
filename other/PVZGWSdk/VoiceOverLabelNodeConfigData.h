///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/VoiceOverLabelCompareMode.h>
#include <fb/VoiceOverLabelSourceMode.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverLabel;
}

namespace fb {
	class VoiceOverLabelNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLabelNodeConfigData"); }
		virtual ~VoiceOverLabelNodeConfigData() override {}
		VoiceOverLabelNodeConfigData() {
			m_sourceMode = VoiceOverLabelSourceMode::VoiceOverLabelSourceMode_Combined;
			m_wantedCompareMode = VoiceOverLabelCompareMode::VoiceOverLabelCompareMode_Any;
			m_unwantedCompareMode = VoiceOverLabelCompareMode::VoiceOverLabelCompareMode_Any;
		};

		RefArray<VoiceOverLabel> m_wantedLabels; // 0x18 (24)
		RefArray<VoiceOverLabel> m_unwantedLabels; // 0x20 (32)
		VoiceOverLabelSourceMode m_sourceMode; // 0x28 (40)
		VoiceOverLabelCompareMode m_wantedCompareMode; // 0x2C (44)
		VoiceOverLabelCompareMode m_unwantedCompareMode; // 0x30 (48)
	}; // 0x38 (56)
}

