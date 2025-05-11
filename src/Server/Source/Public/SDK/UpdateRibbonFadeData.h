///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateRibbonFadeData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateRibbonFadeData"); }
		virtual ~UpdateRibbonFadeData() override {}
		UpdateRibbonFadeData() {
			m_fadeInParticleCount = 2;
			m_fadeOutParticleCount = 2;
		};

		s32 m_fadeInParticleCount; // 0x28 (40)
		s32 m_fadeOutParticleCount; // 0x2C (44)
	}; // 0x30 (48)
}

