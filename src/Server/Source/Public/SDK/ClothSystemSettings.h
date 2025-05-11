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
	class ClothSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothSystemSettings"); }
		virtual ~ClothSystemSettings() override {}
		ClothSystemSettings() {
			m_clothSystemQualityLevel = QualityLevel::QualityLevel_Low;
			m_defaultActivationRadius = 250.f;
		};

		QualityLevel m_clothSystemQualityLevel; // 0x10 (16)
		float m_defaultActivationRadius; // 0x14 (20)
	}; // 0x18 (24)
}

