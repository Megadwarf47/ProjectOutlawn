///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevelDescriptionComponent.h>
#include <fb/PlatformScalableInt.h>

namespace fb {
	class MemoryLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MemoryLevelDescriptionComponent"); }
		virtual ~MemoryLevelDescriptionComponent() override {}
		MemoryLevelDescriptionComponent() {
			m_texturePoolSize = -1;
			m_texturePoolSizeXenon = -1;
			m_texturePoolSizePs3 = -1;
			m_meshPoolSizePs3 = -1;
			m_meshPoolSizePs3Cell = -1;
			m_meshPoolSizeXenon = -1;
			m_emitterBaseAtlasWidth = PlatformScalableInt(-1, -1, -1, -1, -1);
			m_emitterBaseAtlasHeight = PlatformScalableInt(-1, -1, -1, -1, -1);
			m_emitterBaseAtlasMipmapCount = PlatformScalableInt(-1, -1, -1, -1, -1);
			m_emitterNormalAtlasWidth = PlatformScalableInt(-1, -1, -1, -1, -1);
			m_emitterNormalAtlasHeight = PlatformScalableInt(-1, -1, -1, -1, -1);
			m_emitterNormalAtlasMipmapCount = PlatformScalableInt(-1, -1, -1, -1, -1);
		};

		s32 m_texturePoolSize; // 0x10 (16)
		s32 m_texturePoolSizeXenon; // 0x14 (20)
		s32 m_texturePoolSizePs3; // 0x18 (24)
		s32 m_meshPoolSizePs3; // 0x1C (28)
		s32 m_meshPoolSizePs3Cell; // 0x20 (32)
		s32 m_meshPoolSizeXenon; // 0x24 (36)
		PlatformScalableInt m_emitterBaseAtlasWidth; // 0x28 (40)
		PlatformScalableInt m_emitterBaseAtlasHeight; // 0x3C (60)
		PlatformScalableInt m_emitterBaseAtlasMipmapCount; // 0x50 (80)
		PlatformScalableInt m_emitterNormalAtlasWidth; // 0x64 (100)
		PlatformScalableInt m_emitterNormalAtlasHeight; // 0x78 (120)
		PlatformScalableInt m_emitterNormalAtlasMipmapCount; // 0x8C (140)
	}; // 0xA0 (160)
}

