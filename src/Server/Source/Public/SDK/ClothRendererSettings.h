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
	class ClothRendererSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothRendererSettings"); }
		virtual ~ClothRendererSettings() override {}
		ClothRendererSettings() {
			m_vertexBuffersDefaultSize = 2000000;
			m_clothRendererQualityLevel = QualityLevel::QualityLevel_Low;
		};

		u32 m_vertexBuffersDefaultSize; // 0x10 (16)
		QualityLevel m_clothRendererQualityLevel; // 0x14 (20)
	}; // 0x18 (24)
}

