///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class TextureSliceUnlockPartData;
}

namespace fb {
	class UnlockableTextureSliceCollection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockableTextureSliceCollection"); }
		virtual ~UnlockableTextureSliceCollection() override {}
		UnlockableTextureSliceCollection() {
			m_defaultValue = -1;
		};

		s32 m_defaultValue; // 0x10 (16)
		RefArray<TextureSliceUnlockPartData> m_possibleValues; // 0x18 (24)
	}; // 0x20 (32)
}

