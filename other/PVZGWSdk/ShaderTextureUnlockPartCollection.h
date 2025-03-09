///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/ShaderCustomizationUnlockPartCollection.h>

namespace fb {
	class TextureReference;
	class TextureUnlockPartData;
}

namespace fb {
	class ShaderTextureUnlockPartCollection : public ShaderCustomizationUnlockPartCollection {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderTextureUnlockPartCollection"); }
		virtual ~ShaderTextureUnlockPartCollection() override {}
		ShaderTextureUnlockPartCollection() {
		};

		CtrRef<TextureReference> m_defaultTextureReference; // 0x28 (40)
		RefArray<TextureUnlockPartData> m_unlockParts; // 0x30 (48)
	}; // 0x38 (56)
}

