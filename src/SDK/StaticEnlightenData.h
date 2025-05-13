///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class StaticEnlightenData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticEnlightenData"); }
		virtual ~StaticEnlightenData() override {}
		StaticEnlightenData() {
			m_databaseResource = ;
			m_staticGen4Enable = true;
			m_cubeMapsGen3Enable = false;
			m_textureCompressionEnable = false;
			m_chromaCompressionEnable = true;
		};

		CtrRef<TextureAsset> m_staticIrradianceChromaTexture; // 0x18 (24)
		ResourceRef m_databaseResource; // 0x20 (32)
		CtrRef<TextureAsset> m_staticIrradianceLumaTexture; // 0x28 (40)
		CtrRef<TextureAsset> m_staticDirectionTexture; // 0x30 (48)
		RefArray<TextureAsset> m_staticCubeMapTextures; // 0x38 (56)
		bool m_staticGen4Enable; // 0x40 (64)
		bool m_cubeMapsGen3Enable; // 0x41 (65)
		bool m_textureCompressionEnable; // 0x42 (66)
		bool m_chromaCompressionEnable; // 0x43 (67)
	}; // 0x48 (72)
}

