///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>

namespace fb {
	class EffectSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectSystemSettings"); }
		virtual ~EffectSystemSettings() override {}
		EffectSystemSettings() {
			m_effectQualityLevel = QualityLevel::QualityLevel_Low;
			m_enterLevelDisableEffectEnable = true;
		};

		QualityLevel m_effectQualityLevel; // 0x10 (16)
		bool m_enterLevelDisableEffectEnable; // 0x14 (20)
	}; // 0x18 (24)
}

