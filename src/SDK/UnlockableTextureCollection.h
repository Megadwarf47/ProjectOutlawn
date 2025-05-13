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
	class TextureAsset;
}

namespace fb {
	class UnlockableTextureCollection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockableTextureCollection"); }
		virtual ~UnlockableTextureCollection() override {}
		UnlockableTextureCollection() {
		};

		CtrRef<TextureAsset> m_defaultValue; // 0x10 (16)
	}; // 0x18 (24)
}

