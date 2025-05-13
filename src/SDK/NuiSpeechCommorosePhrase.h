///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/NuiSpeechCommoroseApplicabilityCondition.h>
#include <fb/NuiSpeechPhrase.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechCommorosePhrase : public NuiSpeechPhrase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechCommorosePhrase"); }
		virtual ~NuiSpeechCommorosePhrase() override {}
		NuiSpeechCommorosePhrase() {
			m_applicabilityCondition = NuiSpeechCommoroseApplicabilityCondition::NuiSpeechCommoroseApplicabilityCondition_Always;
		};

		String m_commoRoseButton; // 0x40 (64)
		NuiSpeechCommoroseApplicabilityCondition m_applicabilityCondition; // 0x48 (72)
	}; // 0x50 (80)
}

