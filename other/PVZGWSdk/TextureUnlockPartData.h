///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class TextureReference;
}

namespace fb {
	class TextureUnlockPartData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureUnlockPartData"); }
		virtual ~TextureUnlockPartData() override {}
		TextureUnlockPartData() {
		};

		CtrRef<TextureReference> m_textureReference; // 0x10 (16)
	}; // 0x18 (24)
}

