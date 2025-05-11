///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class DynamicTextureAtlasSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicTextureAtlasSettings"); }
		virtual ~DynamicTextureAtlasSettings() override {}
		DynamicTextureAtlasSettings() {
			m_emitterBaseWidth = 4096;
			m_emitterBaseHeight = 4096;
			m_emitterBaseMipmapCount = 5;
			m_emitterBaseSkipmipsCount = 0;
			m_emitterNormalWidth = 512;
			m_emitterNormalHeight = 512;
			m_emitterNormalMipmapCount = 3;
			m_emitterNormalSkipmipsCount = 0;
		};

		u32 m_emitterBaseWidth; // 0x10 (16)
		u32 m_emitterBaseHeight; // 0x14 (20)
		u32 m_emitterBaseMipmapCount; // 0x18 (24)
		u32 m_emitterBaseSkipmipsCount; // 0x1C (28)
		u32 m_emitterNormalWidth; // 0x20 (32)
		u32 m_emitterNormalHeight; // 0x24 (36)
		u32 m_emitterNormalMipmapCount; // 0x28 (40)
		u32 m_emitterNormalSkipmipsCount; // 0x2C (44)
	}; // 0x30 (48)
}

