///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class NuiSpeechConfidencePolicy : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechConfidencePolicy"); }
		virtual ~NuiSpeechConfidencePolicy() override {}
		NuiSpeechConfidencePolicy() {
			m_minimumConfidence = 0.25f;
			m_singleWordConfidence = 0.5f;
		};

		float m_minimumConfidence; // 0x10 (16)
		float m_singleWordConfidence; // 0x14 (20)
	}; // 0x18 (24)
}

