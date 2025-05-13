///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class DestructionVolumeSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionVolumeSettings"); }
		virtual ~DestructionVolumeSettings() override {}
		DestructionVolumeSettings() {
			m_pixelsPerMeter = 1.f;
			m_distanceFieldMultiplier = 0.2f;
			m_texturePoolSize = 262208;
			m_texturePoolHeadroomSize = 16384;
			m_texturePoolDefragTransferLimit = 64;
			m_jobsEnable = true;
			m_forceUpdateEnable = false;
			m_drawDebugVolumes = false;
			m_drawDebugImpacts = false;
			m_drawDebugTexturePool = false;
		};

		float m_pixelsPerMeter; // 0x10 (16)
		float m_distanceFieldMultiplier; // 0x14 (20)
		s32 m_texturePoolSize; // 0x18 (24)
		s32 m_texturePoolHeadroomSize; // 0x1C (28)
		s32 m_texturePoolDefragTransferLimit; // 0x20 (32)
		bool m_jobsEnable; // 0x24 (36)
		bool m_forceUpdateEnable; // 0x25 (37)
		bool m_drawDebugVolumes; // 0x26 (38)
		bool m_drawDebugImpacts; // 0x27 (39)
		bool m_drawDebugTexturePool; // 0x28 (40)
	}; // 0x30 (48)
}

