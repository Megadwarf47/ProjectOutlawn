///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class ShaderTextureUnlockPartCollection;
	class TextUnlockPartData;
}

namespace fb {
	class VehicleVisualCustomizationAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleVisualCustomizationAsset"); }
		virtual ~VehicleVisualCustomizationAsset() override {}
		VehicleVisualCustomizationAsset() {
		};

		RefArray<ShaderTextureUnlockPartCollection> m_textureUnlockPartCollections; // 0x18 (24)
		RefArray<TextUnlockPartData> m_textUnlockParts; // 0x20 (32)
	}; // 0x28 (40)
}

