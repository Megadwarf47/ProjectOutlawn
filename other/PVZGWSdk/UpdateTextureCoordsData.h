///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ProcessorData.h>

namespace fb {
	class AtlasTextureAsset;
}

namespace fb {
	class UpdateTextureCoordsData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateTextureCoordsData"); }
		virtual ~UpdateTextureCoordsData() override {}
		UpdateTextureCoordsData() {
		};

		CtrRef<AtlasTextureAsset> m_baseTexture; // 0x28 (40)
		CtrRef<AtlasTextureAsset> m_normalTexture; // 0x30 (48)
	}; // 0x38 (56)
}

