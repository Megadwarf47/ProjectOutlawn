///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateRibbonTextureData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateRibbonTextureData"); }
		virtual ~UpdateRibbonTextureData() override {}
		UpdateRibbonTextureData() {
			m_textureParticleCount = 1;
			m_mirrorTexture = true;
		};

		s32 m_textureParticleCount; // 0x28 (40)
		bool m_mirrorTexture; // 0x2C (44)
	}; // 0x30 (48)
}

